#pragma once

#include <mutex>
#include <string>

namespace Library
{

enum class e_type
{
    book,
    eBook,
    audioBook
};

class IMedia
{
public:
    IMedia(int id, std::string& title, e_type& type)
        : m_id(id)
        , m_title(title)
        , m_type(type)
    {
    }

    virtual void lendOut() = 0;
    virtual void mediaReturned() = 0;

    bool isAvailable()
    {
        const std::lock_guard<std::mutex> lock(m_mutex);
        return m_available;
    }
    void setAvailable(bool available)
    {
        const std::lock_guard<std::mutex> lock(m_mutex);
        m_available = available;
    }
    bool getAvailable()
    {
        const std::lock_guard<std::mutex> lock(m_mutex);
        return m_available;
    }

protected:
    std::string m_title;
    e_type m_type;

private:
    int m_id;
    bool m_available;

    std::mutex m_mutex;
};

} // namespace Library