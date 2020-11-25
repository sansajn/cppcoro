# dependencies, libc++-dev (10+), clang (10+)

cpp20 = Environment(
	CXX='clang++-10',
	CCFLAGS=['-std=c++20', '-Wall', '-O0', '-g', '-fcoroutines-ts', '-stdlib=libc++'],
	CPPPATH=['include'])

cpp20.StaticLibrary('cppcoro', Glob('lib/*.cpp'))

