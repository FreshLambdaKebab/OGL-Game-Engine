
namespace FLKGameEngine
{
	//2 piece vector data
	template <typename T>
	struct vec2
	{
		typedef T value_type;

		//unify the different sets of data in memory
		union
		{
			struct { T x, y; };
			struct { T r, g; };
			struct { T width, height; };
			struct { T major, minor; };
		};
	};

}