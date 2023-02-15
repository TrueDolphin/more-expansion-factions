	modded class eAIBase {
    override void eAI_SetFactionTypeID(int id)
    {
      super.eAI_SetFactionTypeID(id);
          DiseaseCheck();     
    }
	  void DiseaseCheck() {
		if (GetModifiersManager()) GetModifiersManager().DeactivateAllModifiers();
		if (m_AgentPool) m_AgentPool.RemoveAllAgents();
	    eAIGroup group = eAIGroup.Cast(GetGroup());
	    if (!group) return;
	    if (GetGroup().GetFaction().HasModifier()) {
			string modifierlower = GetGroup().GetFaction().FactionModifier();
			modifierlower.ToLower();
	      switch (modifierlower)
		{
	      case "brain":
	      m_ModifiersManager.AddModifier(new BrainDiseaseMdfr);
		  InsertAgent(eAgents.BRAIN, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_BRAIN);
	      break;
	      case "common_cold":
	      m_ModifiersManager.AddModifier(new CommonColdMdfr);
		  InsertAgent(eAgents.INFLUENZA, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_COMMON_COLD);
	      break;
	      case "blinded":
	      m_ModifiersManager.AddModifier(new BlindedMdfr);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_BLINDED);
	      break;
	      case "poisoning":
	      m_ModifiersManager.AddModifier(new PoisoningMdfr);
		  InsertAgent(eAgents.FOOD_POISON, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_POISONING);
	      break;
	      case "influenza":
	      m_ModifiersManager.AddModifier(new InfluenzaMdfr);
		  InsertAgent(eAgents.INFLUENZA, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_INFLUENZA);
	      break;
	      case "broken_legs":
	      m_ModifiersManager.AddModifier(new BrokenLegsMdfr);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_BROKEN_LEGS);
	      break;
	      case "cholera":
	      m_ModifiersManager.AddModifier(new CholeraMdfr);
		  InsertAgent(eAgents.CHOLERA, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHOLERA);
	      break;
	      case "salmonella":
	      m_ModifiersManager.AddModifier(new SalmonellaMdfr);
		  InsertAgent(eAgents.SALMONELLA, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_SALMONELLA);
	      break;
	      case "fatigue":
	      m_ModifiersManager.AddModifier(new WoundInfectStage1Mdfr);
		  m_ModifiersManager.AddModifier(new FatigueMdfr);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_WOUND_INFECTION1);
		  m_ModifiersManager.ActivateModifier(eModifiers.MDF_FATIGUE);
	      break;
	      case "contamination1":
	      m_ModifiersManager.AddModifier(new ContaminationStage1Mdfr);
		  InsertAgent(eAgents.CHEMICAL_POISON, 1);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION1);
	      break;
	      case "contamination2":
	      m_ModifiersManager.AddModifier(new ContaminationStage2Mdfr);
		  InsertAgent(eAgents.CHEMICAL_POISON, 10);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION2);
	      break;
	      case "contamination3":
	      m_ModifiersManager.AddModifier(new ContaminationStage3Mdfr);
		  InsertAgent(eAgents.CHEMICAL_POISON, 20);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_CONTAMINATION3);
	      break;
	      case "areaexposure":
	      m_ModifiersManager.AddModifier(new AreaExposureMdfr);
		  InsertAgent(eAgents.CHEMICAL_POISON, 5);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_AREAEXPOSURE);
	      break;
	      case "flies":
	      m_ModifiersManager.AddModifier(new FliesMdfr);
	      m_ModifiersManager.ActivateModifier(eModifiers.MDF_FLIES);
	      break;
		}
	    }
	  }
	};