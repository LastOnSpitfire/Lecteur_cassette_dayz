class CfgPatches
{
	class LDA_cassette
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"LDA_cassette_story",
			"DZ_Radio",
			"DZ_Gear_Consumables",
			"DZ_Data"
		};
	};
};
class CfgMods
{
    class LDA_cassette
    {
        dir = "LDA_cassette";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "LDA_cassette";
        credits = "";
        author = "";
        authorID = "0"; 
        version = "1.0"; 
        extra = 0;
        type = "mod";

        dependencies[] = {"Game", "World", "Mission"};
        
        class defs
        {
			class imageSets 
			{
				files[]=
				{
					"LDA_cassette/gui/imagesets/SF_Cassette_slot.imageset",
					"LDA_cassette/gui/imagesets/SF_GhostImage_slot.imageset"
				};
			};
            class gameScriptModule
            {
                value = "";
                files[] = {"LDA_cassette/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"LDA_cassette/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"LDA_cassette/Scripts/5_Mission"};
            };
        };
	};
};
