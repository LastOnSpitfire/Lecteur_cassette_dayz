class CfgPatches
{
	class sound
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
			"LDA_cassette"
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Enoch: CAWorld
	{
		class EnvSounds
		{
			class CfgEnvSpatialSounds
			{
				class sound_play_cassette1
				{
					memPoint="sound_disfx_playground";
					soundSets[]=
					{
						"Amazing_Grace_SoundSet",
					};
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class basecassette_SoundShader: baseCharacter_SoundShader
	{
		range=10;
	};
	class play_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\play1",
				1
			}
		};
		volume=1;
	};
	class stop_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\stop1",
				1
			},
			
			{
				"LDA_cassette\Model\sound\stop2",
				1
			},
		};
		volume=1;
	};
	class ouverture_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\ouverture",
				1
			},
			
			{
				"LDA_cassette\Model\sound\ouverture2",
				1
			}
		};
		volume=1;
	};
	class fermeture_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\fermeture",
				1
			}
		};
		volume=1;
	};
	class rembobinage_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\rembobinage",
				1
			}
		};
		volume=1.5;
	};
	class Amazing_Grace_Soundshader: basecassette_SoundShader
	{
		samples[]=
		{
			
			{
				"LDA_cassette\Model\sound\Amazing_Grace_United_Pipers_for_Peace",
				1
			},
		};
		volume=1;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class play_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"play_Soundshader"
		};
	};
	class stop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"stop_Soundshader"
		};
	};
	class ouverture_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"ouverture_Soundshader"
		};
	};
	class fermeture_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"fermeture_Soundshader"
		};
	};
	class rembobinage_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"rembobinage_Soundshader"
		};
	};
	class Amazing_Grace_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Amazing_Grace_Soundshader"
		};
	};
};
/*
class CfgSounds
{
	class default
	{
		name="";
		titles[]={};
	};
	class doorWoodRattle_1: default
	{
		sound[]=
		{
			"\DZ\sounds\environment\buildings\doors\WoodRattle\doorWoodRattle_1",
			0.56234133,
			1,
			30
		};
	};
};
*/
