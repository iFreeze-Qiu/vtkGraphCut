#include "vtkGraphCutFordFulkerson.h"

#include <vtkSmartPointer.h>
#include <vtkMath.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkProperty.h>
#include <vtkMutableUndirectedGraph.h>
#include <vtkGraphLayoutView.h>

void GenerateData(vtkPolyData* polydata, int n);

int main(int, char *[])
{
  vtkSmartPointer<vtkMutableUndirectedGraph> g =
    vtkSmartPointer<vtkMutableUndirectedGraph>::New();
  
  vtkSmartPointer<vtkGraphCutFordFulkerson> graphCut =
    vtkSmartPointer<vtkGraphCutFordFulkerson>::New();
  graphCut->SetInputConnection(g->GetProducerPort());
  graphCut->Update();

  // Visualize result
  vtkSmartPointer<vtkGraphLayoutView> graphLayoutView =
    vtkSmartPointer<vtkGraphLayoutView>::New();
  graphLayoutView->AddRepresentationFromInput(g);
  graphLayoutView->SetLayoutStrategy("Simple 2D");
  graphLayoutView->ResetCamera();
  graphLayoutView->Render();
  graphLayoutView->GetInteractor()->Start();

  return EXIT_SUCCESS;
}

void GenerateData(vtkMutableUndirectedGraph* g)
{
  vtkIdType v1 = g->AddVertex();
  vtkIdType v2 = g->AddVertex();

  g->AddEdge(v1, v2);
  g->AddEdge(v1, v2);
}
