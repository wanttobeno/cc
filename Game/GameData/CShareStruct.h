#pragma once

#define US_MAP_NAME "GAME_LOL_1.0"


//游戏基地址相关
typedef struct _BASE_GAME_ADDR 
{
	DWORD Base_GameStartTime;    //游戏开局时间     偏移:1    //OD地址:0x0056BB6E
	DWORD Base_RoleSelfAddr;    //玩家基地址     偏移:2    //OD地址:0x009CB632
	DWORD Base_BufferAddr;    //buff数组基地址     偏移:2    //OD地址:0x00A0F40A
	DWORD Base_MonsterArrayAddr;    //怪物数组基地址     偏移:2    //OD地址:0x005D7552
	DWORD Base_GameWndHwndAddr;    //游戏窗口基地址     偏移:2    //OD地址:0x00B439F4
	DWORD Base_SkillTravseOffset1;    //技能数组第一层偏移     偏移:1    //OD地址:0x0099202D
	DWORD Base_SkillTravseOffset2;    //技能数组第二层偏移     偏移:2    //OD地址:0x007D9C40
	DWORD Base_SkillOffset_Object;    //技能对象偏移     偏移:2    //OD地址:0x00992044
	DWORD Base_SkillCallEcxAddr;    //技能CALL ECX     偏移:2    //OD地址:0x00E51068
	DWORD Base_SkillCallAddr;    //技能CALL     偏移:1    //OD地址:0x00E5108F
	DWORD Base_SkillCallHookAddr;    //技能CALL Hook     偏移:1    //OD地址:0x00920DBD
	DWORD Base_AttackHeroCallAddr;    //普攻CALL     偏移:1    //OD地址:0x009B252E
	DWORD Base_FindWayCallAddr;    //寻路call     偏移:1    //OD地址:0x0081E1E2
	DWORD Base_MonsterCurrentHpOffset;    //当前血量偏移     偏移:4    //OD地址:0x007C43B7（已更新）
	DWORD Base_MonsterCurrentMpOffset;    //当前蓝量偏移     偏移:5    //OD地址:0x00745BAF
	DWORD Base_MonsterBVisableOffset;    //是否可见偏移     偏移:2    //OD地址:0x00A5BF03
	DWORD Base_equipmentTravseOffset1;    //装备数组遍历偏移1     偏移:2    //OD地址:0x0061C94B
	DWORD Base_equipmentTravseOffset2;    //装备数组遍历偏移2     偏移:3    //OD地址:0x006A0729
	DWORD Base_SkillOffset_MP;    //技能蓝耗偏移     偏移:5    //OD地址:0x0077FBDB（已更新）
	DWORD Base_MousePointAddr;            //鼠标位置基地址（已更新）
	DWORD Base_SkillOffset_Range1;		 //技能范围偏移（已更新）
	DWORD Base_SkillOffset_Range2;		 //技能范围偏移（已更新）
	DWORD Base_MonsterOrientationXOffset;  //玩家X朝向
	DWORD Base_MonsterBMovingOffset; //玩家是否移动
	DWORD Base_BufferCountOffset;    //buff 层数偏移
	DWORD Base_BufferOffset; //Buff 在怪物对象下的偏移
}BASE_GAME_ADDR;

//UI界面
typedef struct _UI_CONFIG_INFO
{
	bool bLockQ;  //预判Q
	DWORD VirtualKeyQ;
	bool bLockW;  //预判W
	DWORD VirtualKeyW;
	bool bLockE;  //预判E
	DWORD VirtualKeyE;
	bool bLockR;  //预判R
	DWORD VirtualKeyR;
	bool bOpenAA; //开启走A
	DWORD VirtualKeyAA;
	DWORD dwZouAMs; //走A频率
	DWORD dwZouAMsNew; //走A频率
	DWORD dwTargetSelecter; //目标选择器
	bool bOpenClearAA; //开启清线
	DWORD VirtualKeyOpenClear; //清线热键
	bool bAutoHuabanE; //开启滑板鞋自动E
	bool bAutoEToHero; //对英雄自动E
	bool bAutoEToMons; //对小兵自动E
}UI_CONFIG_INFO;

#pragma pack(1)
typedef struct _SHARED_MEMORY_DATA
{
	BASE_GAME_ADDR game;
	UI_CONFIG_INFO ui;
}SHARED_MEMORY_DATA , *PSHARED_MEMORY_DATA;
#pragma pack()