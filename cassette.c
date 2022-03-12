class Cassette_ColorBase extends Inventory_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("Cassette") == NULL )
		{
			return true;
		}
		return false;
	}
}
class Cassette_red extends Cassette_ColorBase;
class Cassette_blue extends Cassette_ColorBase;
class Cassette_green extends Cassette_ColorBase;
class Cassette_yellow extends Cassette_ColorBase;

