#pragma once
#include <string>
#include <source_location>
#include <stacktrace>

namespace simple_error
{
    template <typename T>
    class error
    {
    public:
        [[nodiscard]] error(
            const std::string& message,
            const T code,
            const bool critical,
            const std::source_location location = std::source_location::current(),
            const std::stacktrace stacktrace = std::stacktrace::current()
        ) : m_message{ message },
            m_code{ code },
            m_critical{ critical },
            m_location{ location },
            m_stacktrace{ stacktrace }
        {
        }
        ~error() {}

        [[nodiscard]] const std::string& message() const
        {
            return m_message;
        }

        [[nodiscard]] const T code() const
        {
            return m_code;
        }

        [[nodiscard]] const bool is_critical() const
        {
            return m_critical;
        }

        [[nodiscard]] const std::source_location& location() const
        {
            return m_location;
        }

        [[nodiscard]] const std::stacktrace& stacktrace() const
        {
            return m_stacktrace;
        }
    private:
        std::string m_message{};
        T m_code{};
        bool m_critical{};
        std::source_location m_location{};
        std::stacktrace m_stacktrace{};
    };
}
