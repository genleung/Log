/// @file LogStream.h
/// @brief LogStream���ͷ�ļ�
/// @date 2016-09-09
/// @author Genleung Lan
/// @version 1.0

#pragma once
#include <iostream>
#include <sstream>

namespace cf {
    namespace utils {
        /// ǰ������
        enum class LogLevel;
        class Log;

        /// @class LogStream
        /// @brief Log����ʹ�õ��ַ�����,��������'<<'����������.
        /// @warning ���಻��������ʹ�ã����ܱ�Log��ʹ��
        class LogStream : public std::ostringstream {
        public:
            ~LogStream();
            //private:
                /// ���캯��.
                /// @param pLog [IN] Log����ָ��
                /// @param curLevel [IN] ��ǰlog��Ϣ��Log�ȼ�
                /// @param prefix [IN] ��ǰlog��Ϣ��ǰ׺�ִ�����ȼ���λ�á�ʱ���
                /// @see LogLevel
            LogStream(Log* pLog, LogLevel curLevel, std::string prefix);

            /// LogStream�Ŀ������캯��.
            LogStream(const LogStream& ls);
            //protected:
                /// ��ǰ����¼��log��Ϣ�ļ���
            LogLevel curLevel;
            /// Log����ָ��
            Log* pLog;
            /// logǰ׺
            std::string prefix;
        };

    };
};

