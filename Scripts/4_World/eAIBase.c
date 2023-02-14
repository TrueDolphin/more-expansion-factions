	modded class eAIBase {
	  override void Init() {
	    super.Init();
	    GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.DiseaseCheck, 2000, false, this);
	  }
	  void DiseaseCheck(eAIBase ai) {
	    if (!ai) return;
	    eAIGroup group = eAIGroup.Cast(ai.GetGroup());
	    if (!group) return;
	    if (ai.GetGroup().GetFaction().HasModifier()) {
			string modifierlower = ai.GetGroup().GetFaction().FactionModifier();
			modifierlower.ToLower();
	      switch (modifierlower)
		{
	      case "brain":
	      ai.m_ModifiersManager.AddModifier(new BrainDiseaseMdfr);
		  ai.InsertAgent(eAgents.BRAIN, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_BRAIN);
	      break;
	      case "common_cold":
	      ai.m_ModifiersManager.AddModifier(new CommonColdMdfr);
		  ai.InsertAgent(eAgents.INFLUENZA, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_COMMON_COLD);
	      break;
	      case "blinded":
	      ai.m_ModifiersManager.AddModifier(new BlindedMdfr);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_BLINDED);
	      break;
	      case "poisoning":
	      ai.m_ModifiersManager.AddModifier(new PoisoningMdfr);
		  ai.InsertAgent(eAgents.FOOD_POISON, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_POISONING);
	      break;
	      case "influenza":
	      ai.m_ModifiersManager.AddModifier(new InfluenzaMdfr);
		  ai.InsertAgent(eAgents.INFLUENZA, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_INFLUENZA);
	      break;
	      case "broken_legs":
	      ai.m_ModifiersManager.AddModifier(new BrokenLegsMdfr);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_BROKEN_LEGS);
	      break;
	      case "cholera":
	      ai.m_ModifiersManager.AddModifier(new CholeraMdfr);
		  ai.InsertAgent(eAgents.CHOLERA, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHOLERA);
	      break;
	      case "salmonella":
	      ai.m_ModifiersManager.AddModifier(new SalmonellaMdfr);
		  ai.InsertAgent(eAgents.SALMONELLA, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_SALMONELLA);
	      break;
	      case "fatigue":
	      ai.m_ModifiersManager.AddModifier(new WoundInfectStage1Mdfr);
		  ai.m_ModifiersManager.AddModifier(new FatigueMdfr);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_WOUND_INFECTION1);
		  ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_FATIGUE);
	      break;
	      case "contamination1":
	      ai.m_ModifiersManager.AddModifier(new ContaminationStage1Mdfr);
		  ai.InsertAgent(eAgents.CHEMICAL_POISON, 1);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION1);
	      break;
	      case "contamination2":
	      ai.m_ModifiersManager.AddModifier(new ContaminationStage2Mdfr);
		  ai.InsertAgent(eAgents.CHEMICAL_POISON, 10);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION2);
	      break;
	      case "contamination3":
	      ai.m_ModifiersManager.AddModifier(new ContaminationStage3Mdfr);
		  ai.InsertAgent(eAgents.CHEMICAL_POISON, 20);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION3);
	      break;
	      case "areaexposure":
	      ai.m_ModifiersManager.AddModifier(new AreaExposureMdfr);
		  ai.InsertAgent(eAgents.CHEMICAL_POISON, 5);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_AREAEXPOSURE);
	      break;
	      case "flies":
	      ai.m_ModifiersManager.AddModifier(new FliesMdfr);
	      ai.m_ModifiersManager.ActivateModifier(eModifiers.MDF_FLIES);
	      break;
		}
	    }
	  }
	};