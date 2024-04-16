# simple_error
## About
C++ Module for a struct that be can be used with std::unexpected

## Requirements
C++23

## Usage
Copy the module into your directory

## Example
```cpp
import error;

enum class error_code : int32_t
{
	invalid_input = 0,
};

std::expected<int, error<error_code>> divide(const int numerator, const int denominator)
{
    if (denominator == 0)
    {
        return std::unexpected(error<error_code>{ "Division by zero", error_code::invalid_input, true });
    }
	
    return numerator / denominator;
}
```