class CfgPatches
{
	class LDA_Cassette_Story
	{
		units[]=
		{
			"LDA_Cassette",
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Radio"
		};
	};
};
class CfgSlots
{
	class Slot_Cassette  //dans p3d, créé copie de p3d proxy et enregisterd dans proget pour export
	{
		name="Cassette";  //identique au invertorySlot et attachment
		displayName="Cassette";  //identique au invertorySlot et attachment
		selection="Cassette"; //SkeletonBones et objet 3d sur covalance proxy lod 1, 2, 3 view geometry et fire geometry
		ghostIcon="set:SF_Cassette_slot image:SF_Cassette";
	};
	class Slot_Cassette2  //dans p3d, créé copie de p3d proxy et enregisterd dans proget pour export
	{
		name="Cassette2";  //identique au invertorySlot et attachment
		displayName="Cassette2";  //identique au invertorySlot et attachment
		selection="Cassette2"; //SkeletonBones et objet 3d sur covalance proxy lod 1, 2, 3 view geometry et fire geometry
		ghostIcon="set:SF_GhostImage_slot image:WaterBottle";
	};	
	class Slot_Cassette3  //dans p3d, créé copie de p3d proxy et enregisterd dans proget pour export
	{
		name="Cassette3";  //identique au invertorySlot et attachment
		displayName="Cassette3";  //identique au invertorySlot et attachment
		selection="Cassette3"; //SkeletonBones et objet 3d sur covalance proxy lod 1, 2, 3 view geometry et fire geometry
		ghostIcon="set:SF_GhostImage_slot image:Cassette_SF";
	};
	class Slot_Cassette4  //dans p3d, créé copie de p3d proxy et enregisterd dans proget pour export
	{
		name="Cassette4";  //identique au invertorySlot et attachment
		displayName="Cassette4";  //identique au invertorySlot et attachment
		selection="Cassette4"; //SkeletonBones et objet 3d sur covalance proxy lod 1, 2, 3 view geometry et fire geometry
		ghostIcon="set:SF_GhostImage_slot image:FirstAddKit";
	};
};
class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class Lecteur_Cassette: Inventory_Base
	{
		scope=2;
		displayName="Lecteur cassette.";
		descriptionShort="Appareil utiliser pour lire les vielles cassettes audio.";
		model="LDA_cassette\Model\rec_cassette_3d.p3d";
		animClass="Knife";
		weight=1700;
		itemSize[]={2,3};
		fragility=0.0099999998;
		absorbency=0.5;
		simulation="ItemRadio";
		attachments[]=
		{
			"BatteryD",
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4"
		};
		oldpower=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.02;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\rec_cassette.paa"
		};
		hiddenSelectionsMaterial[]=
		{
			"LDA_cassette\Model\data\rec_cassette.rvmat"
		};
		class AnimationSources
		{
			class Bouton_Play
			{
				displayName="Bouton Play";
				component="Bouton_Play";
				soundPos="sound_disfx_playground";
				animPeriod=5;
				initPhase=0;
				initOpened=0;
				armor=0;
				soundOpen="Amazing_Grace_Soundshader";
				soundClose="rembobinage_SoundSet";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"LDA_cassette\Model\data\rec_cassette.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"LDA_cassette\Model\data\rec_cassette.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet="play_SoundSet";
					id=1006;
				};
				class turnOffRadio
				{
					soundSet="rembobinage_SoundSet";
					id=1007;
				};
			};
		};
	};
	class Cassette;
	class Cassette_ColorBase: Cassette
	{
		scope=2;
		displayName="Epilogue cassette.";
		descriptionShort="Dans cette epilogue, johne est en proie à des tire et tente de s'enfuire.";
		model="LDA_cassette\Model\Cassette_3d2.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=80;
		inventorySlot[]=
		{
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4"
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\cassette_uv_co.paa"
		};
		hiddenSelectionsMaterial[]=
		{
			"LDA_cassette\Model\data\cassette.rvmat"
		};
		absorbency=0.5;
		itemSize[]={2,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"LDA_cassette\Model\data\cassette.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"LDA_cassette\Model\data\cassette.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"LDA_cassette\Model\data\cassette.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cassette_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cassette_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class Cassette_red: Cassette_ColorBase
	{
		scope=2;
		displayName="Epilogue cassette.";
		descriptionShort="Dans cette epilogue, johne est en proie à des tire et tente de s'enfuire.";
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\cassette_uv_red_co.paa"
		};
	};
	class Cassette_blue: Cassette_ColorBase
	{
		scope=2;
		displayName="Epilogue cassette.";
		descriptionShort="Dans cette epilogue, johne est en proie à des tire et tente de s'enfuire.";
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\cassette_uv_blue_co.paa"
		};
	};
	class Cassette_green: Cassette_ColorBase
	{
		scope=2;
		displayName="Epilogue cassette.";
		descriptionShort="Dans cette epilogue, johne est en proie à des tire et tente de s'enfuire.";
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\cassette_uv_green_co.paa"
		};
	};
	class Cassette_yellow: Cassette_ColorBase
	{
		scope=2;
		displayName="Epilogue cassette.";
		descriptionShort="Dans cette epilogue, johne est en proie à des tire et tente de s'enfuire.";
		hiddenSelectionsTextures[]=
		{
			"LDA_cassette\Model\data\cassette_uv_yellow_co.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyCassette_P: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Cassette","Cassette2","Cassette3","Cassette4"};
		model = "LDA_cassette\Model\Proxy\Cassette_P.p3d";
	};
/*	class Slot_9vBattery: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Slot_9vBattery"};
		model = "\LDA_cassette\Model\Proxy\Cassette_P.p3d";
	};*/
};