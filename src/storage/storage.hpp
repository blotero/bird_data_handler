class Saveable {};
class Key{};

class StorageManager {
public:
  void store(Saveable item);
  Saveable retrieve(Key key);
};