#include "vtkGraphCut.h"

#include <vtkObjectFactory.h>
#include <vtkInformationVector.h>
#include <vtkInformation.h>
#include <vtkSmartPointer.h>

vtkStandardNewMacro(vtkGraphCut);

vtkGraphCut::vtkGraphCut()
{

}

int vtkGraphCut::RequestData(vtkInformation *vtkNotUsed(request),
                                    vtkInformationVector **inputVector,
                                    vtkInformationVector *outputVector)
{
  // Get the info objects
  vtkInformation *inInfo = inputVector[0]->GetInformationObject(0);
  vtkInformation *outInfoColoredPoints = outputVector->GetInformationObject(0);
  vtkInformation *outInfoClusterCenters = outputVector->GetInformationObject(1);

  // Get the input and ouptut
  vtkGraph *input = vtkGraph::SafeDownCast(
      inInfo->Get(vtkDataObject::DATA_OBJECT()));

  return 1;
}


void vtkGraphCut::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
  //os << indent << "K: " << this->K << std::endl;
}