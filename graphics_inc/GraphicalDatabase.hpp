class GraphicalDatabase
{
private:
  std::string		_name;

  MySingleton(Mysingleton const &i)
  {
    i.setName(toto);
    std::string toto;

    toto = str;
  }
  static MySingleton		_instance;

public:
  static Mysingleton	&getInstance();
  std::string const	&getName() const;
  ~MySingleton();
};
