---
layout: splash
permalink: /
header:
  overlay_color: "#5e616c"
  overlay_image: /assets/images/cover/test_header_shear_3.png
  #actions:
  #  - label: "<i class='fas fa-download'></i> Install now"
  #    url: "/installation/"
excerpt: 
  Evaluation of object detection dataset simplified
---


## What is DetectionSuite?

DetectionSuite consists of a set of utilities oriented to simplify developing and testing solutions based on object detection.

{% include video id="gDP9nWCL0Vg" provider="youtube" %}

# Utilities

## DeepLearningSuite

DeepLearningSuite is a tool designed to experiment upon Datasets and Networks using various FrameWorks. Currently it has following Utilities:

+ Auto Evaluator
+ Viewer
+ Converter
+ Detector
+ Evaluator
+ Deployer

Every Tool in DeepLearningSuite requires a config file to run, and currently YAML file format is supported. See Below on how to create a custom Config File.
Each tool may have different requirements for keys in Config File, and they can be known by passing the ```--help``` flag.

### Creating a Custom ```appConfig.yml```
It is recommended to create and assign a dedicated directory for storing all datasets, weights and config files, for easier access and a cleaner ```appConfig.yml``` file.

For Instance we will be using ```/opt/datasets/``` for demonstration purposes.

Create some directories in ```/opt/datasets/``` such as ```cfg```, ```names```, ```weights``` and ```eval```.

Again, these names are temporary and can be changed, but must also be changed in appConfig.yml.

```cfg```: This directory will store config files for various networks. For example, yolo-voc.cfg [2].
```names```: This directory will contain class names for various datasets. For example, voc.names [3].
```weights```: This directory will contain weights for various networks, such as yolo-voc.weights [1] for yolo or a frozen inference graph for tensorflow trained networks.
```eval```: Evaluations path

Once done, you can create you own custom appConfig.yml like the one mentioned below.

```

datasetPath: /opt/datasets/

evaluationsPath: /opt/datasets/eval

weightsPath: /opt/datasets/weights

netCfgPath: /opt/datasets/cfg

namesPath: /opt/datasets/names

inferencesPath: /opt/datasets

```

Place your weights in weights directory, config files in cfg directory, classname files in names. And you are ready to go ⚡️ .

## Sample of input and output

<img src="../assets/images/screen1.png" alt="Screenshot" style="max-width:100%;">

<img src="../assets/images/screen2.png" alt="Screenshot" style="max-width:100%;">

<img src="../assets/images/screen3.png" alt="Screenshot" style="max-width:100%;">