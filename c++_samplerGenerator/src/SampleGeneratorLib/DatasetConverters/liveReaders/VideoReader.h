//
// Created by frivas on 26/03/17.
//

#ifndef SAMPLERGENERATOR_VIDEOREADER_H
#define SAMPLERGENERATOR_VIDEOREADER_H



#include <jderobot/parallelIce/cameraClient.h>
#include <DatasetConverters/readers/DatasetReader.h>


class VideoReader: public DatasetReader {
public:
    VideoReader(const std::string& videoPath);

    bool getNextSample(Sample &sample);
private:
    cv::VideoCapture* cap;
    bool init;

};

typedef boost::shared_ptr<VideoReader> VideoReaderPtr;




#endif //SAMPLERGENERATOR_VIDEOREADER_H
