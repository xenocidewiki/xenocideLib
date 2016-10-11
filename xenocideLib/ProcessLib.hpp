#ifndef XENOLIB_H
#define XENOLIB_H

namespace Process
{
	class ProcessCtrl
	{
	public:
		auto Terminate();
		auto Freeze();
		auto Resume();
		auto Dump();
	};

	class ProcessInfo
	{
	public:
		auto GetPID();
		auto GetProcessList();
		//todo: add more stuff
	};
}

namespace Memory
{
	class MemoryCtrl
	{
	public:
		//todo
	};
}

#endif