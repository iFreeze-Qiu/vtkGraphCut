#ifndef __vtkGraphCut_h
#define __vtkGraphCut_h

#include <vtkGraphAlgorithm.h>

class vtkGraphCut : public vtkGraphAlgorithm
{
public:
  vtkTypeMacro(vtkGraphCut,vtkGraphAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent);
  static vtkGraphCut *New();

  vtkGraphCut();
  
protected:

  int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *);
  
private:
  vtkGraphCut(const vtkGraphCut&);  // Not implemented.
  void operator =(const vtkGraphCut&);  // Not implemented.
};

#endif