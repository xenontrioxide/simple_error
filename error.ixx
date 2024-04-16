export module error;

import <string>;
import <concepts>;

template <typename T>
concept error_enum = std::is_enum_v<T>;

export
{
    template <error_enum T>
    class error
    {
        std::string m_message;
        T m_code;
        bool m_critical;

    public:
        error() : m_message{}, m_code{}, m_critical{} {}
        error(const std::string& m_message, const T m_code, const bool m_critical) : m_message{ m_message }, m_code{ m_code }, m_critical{ m_critical } {}
        ~error() {}

        [[nodiscard]] std::string message() const
        {
            return m_message;
        }

        [[nodiscard]] T code() const
        {
            return m_code;
        }

        [[nodiscard]] bool is_critical() const
        {
            return m_critical;
        }
    };
}