#ifndef __vtkGraphCutFordFulkerson_h
#define __vtkGraphCutFordFulkerson_h

#include "vtkGraphCut.h"

class vtkGraphCutFordFulkerson : public vtkGraphCut
{
public:
  vtkTypeMacro(vtkGraphCutFordFulkerson,vtkGraphCut);
  void PrintSelf(ostream& os, vtkIndent indent);
  static vtkGraphCutFordFulkerson *New();

  vtkGraphCutFordFulkerson();

protected:

  int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *);

private:
  vtkGraphCutFordFulkerson(const vtkGraphCutFordFulkerson&);  // Not implemented.
  void operator =(const vtkGraphCutFordFulkerson&);  // Not implemented.
};

#endif