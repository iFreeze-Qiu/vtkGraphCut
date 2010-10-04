#ifndef __vtkGraphCutEdmondsKarp_h
#define __vtkGraphCutEdmondsKarp_h

#include "vtkGraphCut.h"

class vtkGraphCutEdmondsKarp : public vtkGraphCut
{
public:
  vtkTypeMacro(vtkGraphCutEdmondsKarp,vtkGraphCut);
  void PrintSelf(ostream& os, vtkIndent indent);
  static vtkGraphCutEdmondsKarp *New();

  vtkGraphCutEdmondsKarp();

protected:

  int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *);

private:
  vtkGraphCutEdmondsKarp(const vtkGraphCutEdmondsKarp&);  // Not implemented.
  void operator =(const vtkGraphCutEdmondsKarp&);  // Not implemented.
};

#endif