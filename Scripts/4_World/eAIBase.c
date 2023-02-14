	modded class eAIBase
{
	override void Init()
	{
		super.Init();
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.DiseaseCheck, 2000, false, this);
	}

	void DiseaseCheck(eAIBase ai){
		if (!ai) return;
		eAIGroup group = eAIGroup.Cast(ai.GetGroup());
		if (!group) return;
        if (ai.GetGroup().GetFaction().HasDisease())
		{
            ai.InsertAgent(ai.GetGroup().GetFaction().disease(), 1);
            return;
		}
	}
}