class CfgPatches
{
	class division7_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_main","A3_Data_F_Enoch_Loadorder", "1st_MEU_patch_main"};
		author = "Division-7";
		fileName = "division7_core.pbo";
	};
};

class CfgFactionClasses
{
  class DIV7_UNSC
	{
		dlc = "Division-7";
		displayName = "Division-7";
		priority = 1;
		side = 1;
		primaryLanguage = "RU";
	};
};

class CfgEditorCategories
{
	class DIV7_EditorCategory_Objects
	{
		displayName = "Division-7 Objects";
	};
};

class CfgEditorSubcategories
{
	class DIV7_EditorSubcategory_Objects_Flags
	{
		displayName = "Flags";
	};
};