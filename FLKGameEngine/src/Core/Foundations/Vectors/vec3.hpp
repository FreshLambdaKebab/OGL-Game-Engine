
namespace FLKGameEngine
{

	// vector with 3 pieces of data
	template <typename T>
	struct vec3
	{
		typedef T value_type;

		// unify the different sets of data in one area in memory
		union
		{
			struct { T x, y, z; };
			struct { T r, g, b; };
			struct { T width, height, depth; };
		};
	};

}