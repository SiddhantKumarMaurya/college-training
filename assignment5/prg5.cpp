#include <iostream>

class Media {
public:
    virtual void play() const = 0; // Pure virtual function
};

class Music : public Media {
public:
    void play() const override {
        std::cout << "Playing Music." << std::endl;
    }
};

class Video : public Media {
public:
    void play() const override {
        std::cout << "Playing Video." << std::endl;
    }
};

void playMedia(Media* media) {
    if(dynamic_cast<Music*>(media)) {
        std::cout << "This is Music." << std::endl;
        media->play();
    } else if(dynamic_cast<Video*>(media)) {
        std::cout << "This is Video." << std::endl;
        media->play();
    } else {
        std::cout << "Unknown Media Type." << std::endl;
    }
}

int main() {
    Media* m1 = new Music();
    Media* m2 = new Video();

    playMedia(m1);
    playMedia(m2);

    delete m1;
    delete m2;

    return 0;
}
