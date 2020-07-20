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
bool vitalsAreOk(float bpm, float spo2, float respRate) {

  if(bpm < 70 || bpm > 150) {
    return false;
  } else if(spo2 < 80) {
    return false;
  } else if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}
