cmake_minimum_required(VERSION 2.6)

Project(vtkGraphCut)

FIND_PACKAGE(VTK REQUIRED)
INCLUDE(${VTK_USE_FILE})

ADD_EXECUTABLE(vtkGraphCut vtkGraphCut.cxx Example.cxx)
TARGET_LINK_LIBRARIES(vtkGraphCut vtkHybrid vtkViews)
