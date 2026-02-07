#!/bin/bash
ifconfig -a | grep -e ether | cut -b 15- | cut -b -17
