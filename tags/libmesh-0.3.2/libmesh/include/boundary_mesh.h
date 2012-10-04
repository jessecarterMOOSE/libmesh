// $Id: boundary_mesh.h,v 1.6 2003-02-24 14:35:50 benkirk Exp $

// The Next Great Finite Element Library.
// Copyright (C) 2002  Benjamin S. Kirk, John W. Peterson
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __boundary_mesh_h__
#define __boundary_mesh_h__

// C++ Includes   -----------------------------------



// Local Includes -----------------------------------
#include "mesh_base.h"



/**
 * The \p BoundaryMesh is a \p Mesh in its own right, but it
 * contains a description of the boundary of some other mesh.
 * This is useful for writing the boundary of a domain for inspecting
 * boundary conditions and other things.
 */

// ------------------------------------------------------------
// BoundaryMesh class definition
class BoundaryMesh : public MeshBase
{
 public:

  /**
   * Constructor. Initializes dimenstion and processor id.
   */
  BoundaryMesh(unsigned int d,
	       unsigned int proc_id=libMeshBase::processor_id());
  
  /**
   * Destructor. Empty.
   */
  ~BoundaryMesh();

 private:
};




#endif