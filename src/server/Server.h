#pragma once
#include "RAT.h"
#include <string>

namespace SL {
namespace RAT_Server {

    class ServerImpl;
    class Server {
        ServerImpl *ServerImpl_;

      public:
        Server();
        ~Server();
        void ShareClipboard(RAT_Lite::ClipboardSharing clipsharing);
        RAT_Lite::ClipboardSharing ShareClipboard() const;
        void MaxConnections(int maxconnections);
        int MaxConnections() const;
        void FrameChangeInterval(int delay_in_ms);
        int FrameChangeInterval() const;
        void MouseChangeInterval(int delay_in_ms);
        int MouseChangeInterval() const;
        // imagecompression is [0, 100]    = [WORST, BEST]
        void ImageCompressionSetting(int compression);
        int ImageCompressionSetting() const;
        void EncodeImagesAsGrayScale(RAT_Lite::ImageEncoding encoding);
        RAT_Lite::ImageEncoding EncodeImagesAsGrayScale() const;

        void Run(unsigned short port, std::string PasswordToPrivateKey, std::string PathTo_Private_Key, std::string PathTo_Public_Certficate);
    };
} // namespace RAT_Server
} // namespace SL
