static bool isbpmOk(float bpm);
static bool isbpmOk(float bpm)
{
  bool return_value;
  return_value = true;
  if(bpm < 70 || bpm > 150) {
    return_value = false;
  }
  return (return_value);
}

static bool isrespRateOk(float respRate) {
  bool return_value;
  return_value = true;
  if (resprate < 30 || respRate > 60) {
    return_value = false;
  }
  return (return_value);
}
  
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {

  if(isbpmOk(bpm) != true) {
    return false;
  } else if(spo2 < 80) {
    return false;
  } else if(isrespRateOk(respRate) != true) {
    return false;
  }
  return true;
}
