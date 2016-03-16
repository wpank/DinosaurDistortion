#ifndef __DINOSAURDISTORTION__
#define __DINOSAURDISTORTION__

#include "IPlug_include_in_plug_hdr.h"

class DinosaurDistortion : public IPlug
{
public:
  DinosaurDistortion(IPlugInstanceInfo instanceInfo);
  ~DinosaurDistortion();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mThreshold;
  void CreatePresets();
};

#endif
