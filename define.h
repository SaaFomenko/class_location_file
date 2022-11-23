#include <string>


struct paths
{
	static const char* in;
	static const char* out;
};

class File
{
	private:
		const char* in;
		const char* out;
	public:
		std::string data;
		int get(const char* in = "./in.txt");
		int set(const char* out = "./out.txt");
};

struct lable
{
  static const std::string err_fin;
  static const std::string err_fout;
};
