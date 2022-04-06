#pragma once
template<class T>
T maximum(T value1, T value2, T value3) {
	T maximumValue = value1;

	if ( maximumValue < value2 ) {
		maximumValue = value2;
	}
	if (maximumValue < value3) {
		maximumValue = value3;
	}
	return maximumValue;
}
