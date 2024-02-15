#include "Span.hpp"
#include "Span.hpp"

int main()
{ 
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception const& mess)
    {
        std::cerr << "Exception : " << mess.what() << std::endl;
    }
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception const& mess)
    {
        std::cerr << "Exception : " << mess.what() << std::endl;
    }
    {
        Span toto(100);
		srand(time(NULL));
		std::vector<int> add_to_toto;
		for (size_t i = 0; i < 10; i++)
		{
			add_to_toto.push_back(std::rand() % 100000);	
		}
		try
		{
			std::vector<int>::iterator it_start = add_to_toto.begin();
			std::vector<int>::iterator it_end = add_to_toto.end();
			toto.addMultipleNumbers(it_start, it_end);
			std::cout << toto.shortestSpan() << std::endl;
			std::cout << toto.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
    }
    return 0;
}