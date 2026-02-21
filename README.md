# Face-detector

A real-time face detection application built with C++ and OpenCV. This project leverages computer vision techniques to identify and track human faces within video streams or images.

## How It Works

This application utilizes OpenCV's powerful face detection modules (typically Haar Feature-based Cascade Classifiers or Deep Neural Networks). It processes incoming video frames, converts them to grayscale to reduce the computational load, and scans the image matrix for specific facial features. When a face is detected, the program calculates the coordinates and draws a bounding box around the targeted area. 

Given the computational demands of real-time video processing, running this on capable hardware, such as an Intel Core i7 12th Gen 12700H processor, ensures smooth, lag-free frame rates during execution and rapid bounding box rendering.

## Prerequisites

Before building the project, ensure you have the following installed on your system:
- **C++ Compiler**: GCC (g++) or MSVC.
- **OpenCV Library**: The core library required for computer vision tasks.

### Installing OpenCV

**Linux (e.g., Ubuntu, Kali Linux):**
```bash
sudo apt update
sudo apt install libopencv-dev
