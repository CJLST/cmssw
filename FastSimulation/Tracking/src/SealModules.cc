#include "FWCore/PluginManager/interface/ModuleDef.h"

#include "FWCore/Framework/interface/MakerMacros.h"

#include "FastSimulation/Tracking/interface/GSTrackCandidateMaker.h"

#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/Framework/interface/eventsetupdata_registration_macro.h"

DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_MODULE(GSTrackCandidateMaker);
