modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		/* pType.AddItemInHandsProfileIK("item class", ".asi", pBehavior , 				".anm");*/
//		pType.AddItemInHandsProfileIK("Cassette", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior , 						"dz/anims/anm/player/ik/gear/cassette.anm");		
		pType.AddItemInHandsProfileIK("Lecteur_Cassette", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 						"dz/anims/anm/player/ik/gear/PersonalRadio.anm");
//		pType.AddItemInHandsProfileIK("Lecteur_Cassette", "dz/anims/workspaces/player/player_main/props/player_main_1h_radio.asi", pBehavior,				 	"dz/anims/anm/player/ik/gear/Radio.anm")
//		pType.AddItemInHandsProfileIK("Lecteur_Cassette", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi", pBehavior, "dz/anims/anm/player/ik/heavy/generator.anm");
	};
};
//pType.AddItemInHandsProfileIK("FirstAidKit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 						"dz/anims/anm/player/ik/gear/first_aid_kit.anm");	
//pType.AddItemInHandsProfileIK("Radio", "dz/anims/workspaces/player/player_main/props/player_main_1h_radio.asi", toolsOneHanded,				 	"dz/anims/anm/player/ik/gear/Radio.anm");  
//pType.AddItemInHandsProfileIK("Cassette", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,							"dz/anims/anm/player/ik/gear/cassette.anm");
//		pType.AddItemInHandsProfileIK("DirtBikeHelmet_Visor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,				"dz/anims/anm/player/ik/gear/dirtbike_visor.anm");
//		pType.AddItemInHandsProfileIK("PersonalRadio", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 					"dz/anims/anm/player/ik/gear/PersonalRadio.anm");
//pType.AddItemInHandsProfileIK("PowerGenerator", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/generator.anm");