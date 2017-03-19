#pragma once
template <int val>
class factorial {
public:
	enum { retVal = val*factorial<val - 1>::retVal };
};

// Full template specialization.
template<>
class factorial<0>{
public:
	enum{ retVal = 1 };
};