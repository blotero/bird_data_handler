#include "storage.hpp"

class FileSystemKey : public Key {};

class FileSystemSaveable: public Saveable{};

class FileSystemStorageManager: public StorageManager{};