#ifndef DATARECORDER_H_INCLUDED
#define DATARECORDER_H_INCLUDED
// Su�elje za sve sakuplja�e podataka
class DataRecorder{
  public:
    // Postavi broj o�itavanja podataka
    void  setNoReads(int nr) { mNoReads = nr; }
    virtual ~DataRecorder() {}

  protected:
    int mNoReads = -1;
};
#endif // DATARECORDER_H_INCLUDED
