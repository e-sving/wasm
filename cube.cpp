#include <iostream>
#include <vector>

struct Vertex
{
  float x, y, z;
};

void generateCube(std::vector<Vertex> &vertices, std::vector<int> &indices)
{
  // Vertices for a unit cube
  vertices = {
      {-0.5f, -0.5f, 0.5f}, // Front bottom-left
      {0.5f, -0.5f, 0.5f},  // Front bottom-right
      {0.5f, 0.5f, 0.5f},   // Front top-right
      {-0.5f, 0.5f, 0.5f},  // Front top-left
                            // Repeat for back face (with z = -0.5f)
                            // ...

      // Normals (optional, assuming outward-facing normals)
      // ...

      // Texture coordinates (optional, assuming entire texture on each face)
      // ...
  };

  // Indices for a unit cube (using zero-based indexing)
  indices = {
      0, 1, 2, // Front face
      2, 3, 0,
      // Repeat for back, left, right, top, and bottom faces
      // ...
  };
}

int main()
{
  std::vector<Vertex> cubeVertices;
  std::vector<int> cubeIndices;

  generateCube(cubeVertices, cubeIndices);

  // Print vertices and indices (for demonstration purposes)
  for (const auto &vertex : cubeVertices)
  {
    std::cout << "Vertex: (" << vertex.x << ", " << vertex.y << ", " << vertex.z << ")\n";
  }

  for (const auto &index : cubeIndices)
  {
    std::cout << "Index: " << index << "\n";
  }

  return 0;
}
