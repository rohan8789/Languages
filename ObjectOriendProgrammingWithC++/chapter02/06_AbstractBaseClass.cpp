/*
Abstract Base class is a class that has atleast one pure virtual function
i.e, a function  that has no definition

*/
#include <iostream>
#include <string>

// Abstract class representing a Media Player
class MediaPlayer
{
public:
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
    virtual void adjustVolume(int volume) = 0;
};

// Concrete class representing an Audio Player
class AudioPlayer : public MediaPlayer
{
public:
    void play() override
    {
        std::cout << "Playing audio..." << std::endl;
    }

    void pause() override
    {
        std::cout << "Pausing audio..." << std::endl;
    }

    void stop() override
    {
        std::cout << "Stopping audio..." << std::endl;
    }

    void adjustVolume(int volume) override
    {
        std::cout << "Adjusting audio volume to " << volume << std::endl;
    }
};

// Concrete class representing a Video Player
class VideoPlayer : public MediaPlayer
{
public:
    void play() override
    {
        std::cout << "Playing video..." << std::endl;
    }

    void pause() override
    {
        std::cout << "Pausing video..." << std::endl;
    }

    void stop() override
    {
        std::cout << "Stopping video..." << std::endl;
    }

    void adjustVolume(int volume) override
    {
        std::cout << "Adjusting video volume to " << volume << std::endl;
    }
};

int main()
{
    // Create instances of media players
    MediaPlayer *audioPlayer = new AudioPlayer();
    MediaPlayer *videoPlayer = new VideoPlayer();

    // Use abstraction to interact with media players
    audioPlayer->play();
    audioPlayer->adjustVolume(75);
    audioPlayer->pause();
    audioPlayer->stop();

    videoPlayer->play();
    videoPlayer->adjustVolume(50);
    videoPlayer->pause();
    videoPlayer->stop();

    // Clean up memory
    delete audioPlayer;
    delete videoPlayer;

    return 0;
}
