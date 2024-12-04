int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; 
  } else {
    std::cerr << "Error: Pointer is null" << std::endl;
    //Handle the error appropriately, e.g., return an error code, allocate memory
  }
  return 0;
}