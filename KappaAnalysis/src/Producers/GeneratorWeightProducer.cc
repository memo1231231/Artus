
#include "Artus/KappaAnalysis/interface/Producers/GeneratorWeightProducer.h"


std::string GeneratorWeightProducer::GetProducerId() const {
	return "GeneratorWeightProducer";
}

void GeneratorWeightProducer::Produce(KappaEvent const& event,
		KappaProduct& product,
		KappaSettings const& settings) const
{
	product.m_weights["generatorWeight"] = event.m_genEventMetadata->weight;
}

