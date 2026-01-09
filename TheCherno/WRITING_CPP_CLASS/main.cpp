#include <iostream>

class Log
{
    public:

        enum LogLevel
        {
            LogLevelError = 0,
            LogLevelWarning,
            LogLevelInfo
        };

        // const int LogLevelError = 0;
        // const int LogLevelWarning = 1;
        // const int LogLevelInfo = 2;

    private:
        int m_LogLevel = LogLevelInfo; // By default
    public:
        void SetLevel(int level) // Setter
        {
            m_LogLevel = level;
        }

        void Error(const char *msg)
        {
            if (m_LogLevel >= LogLevelError) {
                std::cout << "[ERROR]: " << msg << std::endl;
            }
            
        }

        void Warn(const char *msg)
        {
            if (m_LogLevel >= LogLevelWarning) {
                std::cout << "[WARNING]: " << msg << std::endl;
            }
        }

        void Info(const char *msg)
        {
            if (m_LogLevel >= LogLevelInfo) {
                std::cout << "[INFO]: " << msg << std::endl;
            }
            
        }

        
};

int main()
{
    Log log;

    log.SetLevel(Log::LogLevelInfo);
    log.Info("Hello!");
    std::cin.get();
}