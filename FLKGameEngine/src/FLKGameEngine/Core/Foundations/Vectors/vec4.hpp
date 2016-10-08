
namespace FLKGameEngine
{

	template<typename T>
	struct vec4
	{
		typedef T value_type;

		union
		{
			struct { T x, y, z, w; };
			struct { T r, g, b, a; };
			struct { T width, height, depth, mass; };
		};
	};

}