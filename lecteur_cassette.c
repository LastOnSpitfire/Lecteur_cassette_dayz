class Lecteur_Cassette extends ItemRadio //Radio
{
	void CheckParent()
	{
		// Spawn a battery in the headtorch if it's attached on a zombie and switch it on
		GetInventory().CreateAttachment("Cassette");
	}
	override bool IsTransmitter()
	{
		return true;
	}
	
	//--- COMMON
	bool CanOperate()
	{
		return GetCompEM().IsSwitchedOn();	
	}
	
	//--- POWER EVENTS
	override void OnSwitchOn()
	{
		//switch device on
		SwitchOn ( true );
	}

	override void OnSwitchOff()
	{
		//switch device off
		SwitchOn ( false );
	}

	override void OnWorkStop()
	{
		//turn off device
		GetCompEM().SwitchOff();
	}
	
	//--- RADIO ACTIONS
	void TuneNextStation()
	{
		//tune next station
		TuneNext();
	}

	void TunePreviousStation()
	{
		//tune previous station
		TunePrev();
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTurnOnTransmitter);
		AddAction(ActionTurnOffTransmitter);
//		AddAction(ActionTuneRadioStation);
	}
}