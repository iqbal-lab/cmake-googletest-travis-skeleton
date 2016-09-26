#if !defined(DBG_H_)
#define DBG_H_

class Node
{
 public:
  bool is_visited();
  
 private:
  uint32_t* out_arrows;
  int num_out_arrows;
  uint32_t id;
  bool visited;
}

#endif
