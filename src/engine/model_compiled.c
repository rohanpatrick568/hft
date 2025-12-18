
#include "model_compiled.h"

;


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 2;
}

const char* get_pred_transform(void) {
  return "identity";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return 0.0;
}

const char* get_threshold_type(void) {
  return "float64";
}

const char* get_leaf_output_type(void) {
  return "float64";
}


static inline double pred_transform(double margin) {
  return margin;
}
double predict(union Entry* data, int pred_margin) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)59.60072762271664004;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)1.044483959332765943;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-10.74468843693686004;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)1.04444646985085754;
                    } else {
                      sum += (double)-12.6619989779737292;
                    }
                  } else {
                    sum += (double)1.044561365326768465;
                  }
                } else {
                  sum += (double)-14.21273513454414328;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)1.044916609505253779;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-10.0981046310777689;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)1.044718195273968808;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-9.260383275061462527;
                      } else {
                        sum += (double)1.044455269108286899;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-14.43797996333760203;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)1.044216517904894559;
          } else {
            sum += (double)1.072921886836591732;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-16.37900504070499252;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)1.0436520866038832;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-13.93176062798992554;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)1.044834350080342311;
                      } else {
                        sum += (double)1.04315735756465755;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-14.55035622886667213;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)1.043575238072806721;
                            } else {
                              sum += (double)1.042128524736335216;
                            }
                          } else {
                            sum += (double)-15.35587555580910468;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)1.042307297317859538;
                          } else {
                            sum += (double)1.065876432128578966;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-16.21466824910460502;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)1.041761144477795442;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)1.080876432333470083;
                } else {
                  sum += (double)1.132012796875756511;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1829.537071906594292;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)55.57731614036356405;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.05111666664399690252;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-11.25083038330078189;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.05115228452261938452;
                    } else {
                      sum += (double)-13.07227480459213353;
                    }
                  } else {
                    sum += (double)-0.05104313490000308984;
                  }
                } else {
                  sum += (double)-14.54547460198402398;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.0507056528930219727;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-10.63657515566440992;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.05089414296734948162;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-9.840740459843686949;
                      } else {
                        sum += (double)-0.0511439263177610598;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-14.7594570150483122;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.05137073870212205406;
          } else {
            sum += (double)-0.02410064017908139858;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-16.60343007647801983;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.05190694723094910201;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-14.27854885585972511;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.05078379959361770113;
                      } else {
                        sum += (double)-0.05237694035955430677;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-14.86621489399179019;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.05197995718540174281;
                            } else {
                              sum += (double)-0.05335433433553082166;
                            }
                          } else {
                            sum += (double)-15.63145717489505415;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.05318449649199556012;
                          } else {
                            sum += (double)-0.03079382363706827455;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-16.44731133879171381;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.05370334443802061986;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01654382218839600682;
                } else {
                  sum += (double)0.03203572156754407041;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1737.016861979166833;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)52.79844970499131307;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.04856083730611593374;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-10.68828889252037229;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.04859467004021163911;
                    } else {
                      sum += (double)-12.41866129183769374;
                    }
                  } else {
                    sum += (double)-0.04849097723684420158;
                  }
                } else {
                  sum += (double)-13.81820070478651274;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.04817036934903756729;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-10.10474675238495301;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.04834943887940507806;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-9.348703166775237605;
                      } else {
                        sum += (double)-0.04858672908480236863;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-14.02148436799561182;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.04880220171825912223;
          } else {
            sum += (double)-0.02289560621773654991;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-15.77325897822304412;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.04931160004137907782;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-13.56462102718040619;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.04957144408163758481;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-14.12290401784782823;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                sum += (double)-0.04978952700656524843;
                              } else {
                                sum += (double)-0.04667572312884860769;
                              }
                            } else {
                              sum += (double)-0.05068661523524242013;
                            }
                          } else {
                            sum += (double)-14.84988527526398627;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.05052527400208714492;
                          } else {
                            sum += (double)-0.02925412937998771515;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-15.62494485175196068;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.05101817606957886886;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01571663044160231948;
                } else {
                  sum += (double)0.03043393668803302116;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1650.166040039062636;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)50.15852859007483744;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.04613279443159522264;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-10.15387375042002738;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.04616493735022736411;
                    } else {
                      sum += (double)-11.79772783422470184;
                    }
                  } else {
                    sum += (double)-0.04606642722579013666;
                  }
                } else {
                  sum += (double)-13.12729026317596492;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.04576184996869415295;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-9.599509781998021296;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.04593196688834658148;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-8.881267729020656532;
                      } else {
                        sum += (double)-0.04615739280504804753;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-13.32040987338049831;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.04636209185724948778;
          } else {
            sum += (double)-0.02175082727758721746;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-14.98459584917341125;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.04684602112493980314;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-12.88639036345351485;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.0470928713177574676;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-13.41675852805460956;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                sum += (double)-0.04881442686070924797;
                              } else {
                                sum += (double)-0.0463721491761667215;
                              }
                            } else {
                              sum += (double)-0.04815228530210466373;
                            }
                          } else {
                            sum += (double)-14.10739072696891405;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.0479990086424332274;
                          } else {
                            sum += (double)-0.02779142429120838934;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-14.84369751361642287;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.04846726715623776022;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01493079778156243369;
                } else {
                  sum += (double)0.02891224080866033538;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1567.657763671875045;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)47.65060287312390841;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.0438261542987346403;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-9.646180662749916479;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.0438566909090708848;
                    } else {
                      sum += (double)-11.20784146642684931;
                    }
                  } else {
                    sum += (double)-0.0437631070336395589;
                  }
                } else {
                  sum += (double)-12.47092614014943557;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.04347375877057424454;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-9.119533969035739318;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.04363536712225758729;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-8.437205035704419487;
                      } else {
                        sum += (double)-0.04384952181107770741;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-12.65438949347889519;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.04387286332795822114;
            } else {
              sum += (double)-0.04518787122074562068;
            }
          } else {
            sum += (double)-0.0206632857623679396;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-14.23536607227628181;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.04450371954324555679;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-12.24207025069356547;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.04341139349619863724;
                      } else {
                        sum += (double)-0.04492487855206289682;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-12.74592093769301826;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.04534900146070246219;
                          } else {
                            sum += (double)-13.4020208621453385;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.04559906035787167355;
                          } else {
                            sum += (double)-0.02640185264870524573;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-14.1015126754808886;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.046043903240518054;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01418426024611108005;
                } else {
                  sum += (double)0.0274666267362507939;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1489.27490234375;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)45.26807039638254082;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.04163484615448078546;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-9.163871269636256756;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.04166385686815016892;
                    } else {
                      sum += (double)-10.64745005798339861;
                    }
                  } else {
                    sum += (double)-0.04157495199372795991;
                  }
                } else {
                  sum += (double)-11.84738003306918763;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.04130006978753954228;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-8.663557530029791565;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.0414535987490235458;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-8.015344694324005204;
                      } else {
                        sum += (double)-0.04165704540939252354;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-12.02166980915824013;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.04184178897458440405;
          } else {
            sum += (double)-0.01963012060573832498;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-13.52359807816763038;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.04227853507751778983;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-11.62996677179805616;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.04250131795032424664;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-12.1086242523628087;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                sum += (double)-0.04268292933134156669;
                              } else {
                                sum += (double)-0.03975588012524325365;
                              }
                            } else {
                              sum += (double)-0.04347722184019073288;
                            }
                          } else {
                            sum += (double)-12.73192061350017212;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.04331910523030649274;
                          } else {
                            sum += (double)-0.0250817594863474401;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-13.39643721234535434;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.04374170957008197136;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01347504738369025359;
                } else {
                  sum += (double)0.02609329860318791022;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1414.811067708333439;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)43.00466838163488603;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.03955310328188407776;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-8.705677850784793392;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.03958066261232131428;
                    } else {
                      sum += (double)-10.11507745933532831;
                    }
                  } else {
                    sum += (double)-0.03949620421413038013;
                  }
                } else {
                  sum += (double)-11.25501075320773658;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.03923506686197860555;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-8.230379721310752572;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.03938091870840870756;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-7.614577342155285145;
                      } else {
                        sum += (double)-0.03957419390005689763;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-11.42058580473991469;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.03958713139792930519;
            } else {
              sum += (double)-0.04083638939827303332;
            }
          } else {
            sum += (double)-0.01864861731671474052;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-12.84741821773468473;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.04016460869207508222;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-11.0484691140430229;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.03911575827280996953;
                      } else {
                        sum += (double)-0.04055356927111174181;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-11.50319316027171368;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.04092747325149771742;
                          } else {
                            sum += (double)-12.09532394866029748;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.04115314995954603983;
                          } else {
                            sum += (double)-0.0238276720792055148;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-12.72661619938510569;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.04155462441040307792;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01280129423321341164;
                } else {
                  sum += (double)0.02478863109241832494;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1344.070605468750045;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)40.85443741905498172;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.03757545096094939974;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-8.270394273983535882;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.03760163045926780828;
                    } else {
                      sum += (double)-9.609323487281798748;
                    }
                  } else {
                    sum += (double)-0.03752139507463005813;
                  }
                } else {
                  sum += (double)-10.69226082377963571;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.03727331409696489628;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-7.818860265642827656;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.0374118732985966318;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-7.23384837458904606;
                      } else {
                        sum += (double)-0.03759548363596572351;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-10.84955744447007753;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.03776221340895877243;
          } else {
            sum += (double)-0.01771618611263958004;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-12.20504781329442778;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.03815637619486284687;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-10.49604585470397744;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.03835743897128393587;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-10.9280337798289775;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                sum += (double)-0.03992573529526569076;
                              } else {
                                sum += (double)-0.03763022113516958922;
                              }
                            } else {
                              sum += (double)-0.03925698646848126139;
                            }
                          } else {
                            sum += (double)-11.49055810117436138;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03909549329164893616;
                          } else {
                            sum += (double)-0.02263628818094730322;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-12.09028541252064137;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.03947689292847458148;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9846635000000001359) ) ) {
                  sum += (double)-0.02000073695644026886;
                } else {
                  sum += (double)0.0166345024086309197;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1276.867089843750136;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)38.8117117081096481;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.0356966767841880861;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-7.85687427807879768;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.03572154793448639731;
                    } else {
                      sum += (double)-9.128857020378113418;
                    }
                  } else {
                    sum += (double)-0.03564532399429792831;
                  }
                } else {
                  sum += (double)-10.15764736281501079;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.03540964671588014978;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-7.427916972874143653;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.03554127992927696988;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-6.872155706506027251;
                      } else {
                        sum += (double)-0.03571571106237989013;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-10.30707936259986468;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.03571966316784047635;
            } else {
              sum += (double)-0.03690645847893968962;
            }
          } else {
            sum += (double)-0.01683037448674440384;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-11.59479449801974837;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.03624855966781869582;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-9.971242916128023381;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.03524209709259119166;
                      } else {
                        sum += (double)-0.03660801891468439678;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-10.38163194792223187;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.03693704483678302009;
                          } else {
                            sum += (double)-10.9160301162811102;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03714072022289070796;
                          } else {
                            sum += (double)-0.02150447379797697234;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-11.48577055344446229;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.0375030463808242176;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.01207707342982757871;
                } else {
                  sum += (double)0.02313378466801210148;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1213.023730468750045;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)36.8711259566526337;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.03391184252223944373;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-7.464030000420027733;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.0339354709428571974;
                    } else {
                      sum += (double)-8.672414859771729212;
                    }
                  } else {
                    sum += (double)-0.03386305866607709769;
                  }
                } else {
                  sum += (double)-9.649765247768826271;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.03363916523887643117;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-7.056521711678340303;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.03376421512993377921;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-6.528547727254997213;
                      } else {
                        sum += (double)-0.03392992605312236676;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-9.79172592486365545;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.03408039820428311606;
          } else {
            sum += (double)-0.01598885704509236602;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-11.01505490257626541;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.03443613144026090589;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-9.472681016348749594;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.03461758793983517324;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-9.862550282274556324;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.03438381695387930648;
                            } else {
                              sum += (double)-0.03544728409704850369;
                            }
                          } else {
                            sum += (double)-10.37022886675988786;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03528368386016726005;
                          } else {
                            sum += (double)-0.0204292503744363807;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-10.91148221470204049;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                sum += (double)-0.03564633297009767859;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9697240000000001414) ) ) {
                  sum += (double)-0.02853402059990912953;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                    sum += (double)0.03068129217551489318;
                  } else {
                    sum += (double)-0.00430527755185418446;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1152.37255859375;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)35.02757184849703975;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.0322162513150985666;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-7.090828962428595617;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.03223869660446461449;
                    } else {
                      sum += (double)-8.238794093132019825;
                    }
                  } else {
                    sum += (double)-0.03216990528472944005;
                  }
                } else {
                  sum += (double)-9.16727718141343928;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.03195720859359772736;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-6.703695177306510544;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.03207600594467766714;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-6.202120747960599978;
                      } else {
                        sum += (double)-0.03223342886109569622;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-9.302138939550367525;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.03237637891867670148;
          } else {
            sum += (double)-0.01518941359086470148;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-10.46430179172092068;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.03271432312359028732;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-8.999046528925660482;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.03174911294455872585;
                      } else {
                        sum += (double)-0.03304673678901418749;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-9.36942291259765625;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.03333568160530324398;
                          } else {
                            sum += (double)-9.851716191183307103;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03351949962364077218;
                          } else {
                            sum += (double)-0.01940778739750385548;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-10.36590761972902897;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                sum += (double)-0.03386401699502028517;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9697240000000001414) ) ) {
                  sum += (double)-0.02710731917371352398;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                    sum += (double)0.02914722669160082699;
                  } else {
                    sum += (double)-0.00409001543108994739;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1094.753873697916561;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)33.27619200517786879;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.03060543874729637279;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-6.736287251134072562;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.03062676345173332565;
                    } else {
                      sum += (double)-7.826854047775268164;
                    }
                  } else {
                    sum += (double)-0.03056140836522178855;
                  }
                } else {
                  sum += (double)-8.70891243828667605;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.0303593481615895347;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-6.368510375109938337;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.03047220589458611573;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-5.892014757314123052;
                      } else {
                        sum += (double)-0.03062175803906690141;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-8.837032718981726376;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.03061084178447217793;
            } else {
              sum += (double)-0.03173829765561261146;
            }
          } else {
            sum += (double)-0.01442994366992603888;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-9.941087602887835217;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.03107860776451785989;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-8.549094082358106306;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.03124237296485986651;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-8.900951351806988043;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.03099784094314452301;
                            } else {
                              sum += (double)-0.03200813485549722226;
                            }
                          } else {
                            sum += (double)-9.359130459631273879;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03184352429959665109;
                          } else {
                            sum += (double)-0.01843739971518516471;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-9.847612129476168263;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.03217081593957434038;
                } else {
                  sum += (double)-0.01298885367751280266;
                }
              } else {
                sum += (double)0.02184836905110966454;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)1040.01611328125;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)31.61238276027740568;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02907516699961688184;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-6.399472958144321488;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02909542479094519296;
                    } else {
                      sum += (double)-7.435510963439941889;
                    }
                  } else {
                    sum += (double)-0.02903333898827629295;
                  }
                } else {
                  sum += (double)-8.273466752370199018;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.0288413787770661588;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-6.050085139709844739;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02894859488072180909;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-5.597414210326689954;
                      } else {
                        sum += (double)-0.02909066966707775717;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-8.395179964054776178;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.0290802987936617241;
            } else {
              sum += (double)-0.03015138062193423868;
            }
          } else {
            sum += (double)-0.01370844620872627845;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-9.444032641214038293;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.029524675930796003;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-8.12164000839483613;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.02859953795741772276;
                      } else {
                        sum += (double)-0.02983228213702397713;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-8.455903951530784113;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.0300854536812067766;
                          } else {
                            sum += (double)-8.89117388011452725;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.03025134716941542748;
                          } else {
                            sum += (double)-0.01751552827656269185;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-9.355232214702040139;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.03056227436417675858;
                } else {
                  sum += (double)-0.01233941140049632512;
                }
              } else {
                sum += (double)0.02075594961643219272;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)988.0152994791666288;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)30.03176189565403575;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02762140673226834431;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-6.079499695480510724;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02764065422591223398;
                    } else {
                      sum += (double)-7.063735658645629911;
                    }
                  } else {
                    sum += (double)-0.02758167083743665038;
                  }
                } else {
                  sum += (double)-7.859793355729845388;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02739930996715667783;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-5.747581116713085692;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02750116465618991646;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-5.317543214783633232;
                      } else {
                        sum += (double)-0.02763613453049877655;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-7.975421239561953257;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.02775869716680229998;
          } else {
            sum += (double)-0.01302302320572462993;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-8.971832139756944713;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02804844469768546719;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-7.715557396477037422;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.02819624102585219921;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-8.033109242148549711;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                sum += (double)-0.02830470977031393498;
                              } else {
                                sum += (double)-0.02555321080967633621;
                              }
                            } else {
                              sum += (double)-0.02890345703916533809;
                            }
                          } else {
                            sum += (double)-8.446615246527208853;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02873878094967997204;
                          } else {
                            sum += (double)-0.01663975313305855047;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-8.887469569064840869;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02903416027653453468;
                } else {
                  sum += (double)-0.01172244055791104266;
                }
              } else {
                sum += (double)0.01971815269101749937;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)938.6145833333334849;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)28.53017524270450167;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02624033731530495822;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-5.775524547946068843;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02625861922436032586;
                    } else {
                      sum += (double)-6.710549015045166321;
                    }
                  } else {
                    sum += (double)-0.02620258924570620374;
                  }
                } else {
                  sum += (double)-7.466803302764893679;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02602934488361435469;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-5.460201797330597628;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02612610641340647535;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-5.051666156510662198;
                      } else {
                        sum += (double)-0.02625432902104626876;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-7.576650173381223929;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.0262383493307710991;
            } else {
              sum += (double)-0.02725587936896312069;
            }
          } else {
            sum += (double)-0.01237187223000960068;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-8.523239775158110376;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02664602190183355812;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-7.329779982436550156;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.0257597491668501502;
                      } else {
                        sum += (double)-0.02693085618434508735;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-7.631453928716502411;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.027152121648802513;
                          } else {
                            sum += (double)-8.024284965834931782;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02730184114748005625;
                          } else {
                            sum += (double)-0.01580776445567607866;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-8.443096981590102246;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02758245337341234948;
                } else {
                  sum += (double)-0.01113631849157366294;
                }
              } else {
                sum += (double)0.01873224621469324336;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)891.6839192708334849;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)27.10366824552974663;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02492831987555358189;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-5.486748755670363131;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02494568978611443055;
                    } else {
                      sum += (double)-6.375021165847778448;
                    }
                  } else {
                    sum += (double)-0.02489245831461917371;
                  }
                } else {
                  sum += (double)-7.093464272816977001;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02472787747203948963;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-5.187191849838164615;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02481980204931532111;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-4.799082559571230533;
                      } else {
                        sum += (double)-0.02494161418612072731;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-7.197817719454146612;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.0250522246843129931;
          } else {
            sum += (double)-0.01175327741286971359;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-8.097077786884609552;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02531372100417610474;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-6.963291560105287381;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.02544710778647406302;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-7.24988101187594669;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                sum += (double)-0.026869614924984183;
                              } else {
                                sum += (double)-0.02471205127880655647;
                              }
                            } else {
                              sum += (double)-0.02610067825321376808;
                            }
                          } else {
                            sum += (double)-7.62307125479875225;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02593674871673505924;
                          } else {
                            sum += (double)-0.01501737728714943113;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-8.020941633832192608;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02620333005010849411;
                } else {
                  sum += (double)-0.01057950297291291621;
                }
              } else {
                sum += (double)0.01779563305052844074;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)847.0996744791666515;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)25.74848329268674618;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02368190477790328707;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-5.212410403015793392;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02369840450575225188;
                    } else {
                      sum += (double)-6.056270404815673913;
                    }
                  } else {
                    sum += (double)-0.02364783583810356818;
                  }
                } else {
                  sum += (double)-6.738791228400336841;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02349148341587611877;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-4.92783207767633602;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02357881096531255077;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-4.559128772764277748;
                      } else {
                        sum += (double)-0.02369453157997725157;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-6.837927325836009373;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.02367382075475609957;
            } else {
              sum += (double)-0.02464047226875643384;
            }
          } else {
            sum += (double)-0.01116561459546739493;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-7.692224494086372211;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02404803426244873574;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-6.615125685311406656;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.02319940630867435571;
                      } else {
                        sum += (double)-0.02431195771384686219;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-6.887387098002638375;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.02450478977453698221;
                          } else {
                            sum += (double)-7.241917097354363619;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02463991109495572082;
                          } else {
                            sum += (double)-0.01426650747656822184;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-7.619894486195658345;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02489316335717596529;
                } else {
                  sum += (double)-0.01005052755663587635;
                }
              } else {
                sum += (double)0.01690585206855427236;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)804.7446614583333258;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)24.46105575153534417;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.0224978093669438925;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-4.951790443338373926;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02251348500798339147;
                    } else {
                      sum += (double)-5.753456882476807088;
                    }
                  } else {
                    sum += (double)-0.02246544505838009992;
                  }
                } else {
                  sum += (double)-6.401850755479600252;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02231690982423190778;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-4.681440211793230333;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02239987131421908653;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-4.331172065448043895;
                      } else {
                        sum += (double)-0.02250980579877790225;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-6.496030788098352104;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.02260963239171896733;
          } else {
            sum += (double)-0.01060733365064317479;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-7.307612493605841308;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02284563275841434288;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-6.284370093006906188;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.02296601498561012464;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-6.54301713035996535;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.02270420336265134564;
                            } else {
                              sum += (double)-0.02357040444610506227;
                            }
                          } else {
                            sum += (double)-6.879821414148023173;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02340791583731489933;
                          } else {
                            sum += (double)-0.0135531808435916893;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-7.238900496907039184;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02364850510540421336;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719445000000001) ) ) {
                    sum += (double)-0.01619625546038151037;
                  } else {
                    sum += (double)-0.004623368182392032129;
                  }
                }
              } else {
                sum += (double)0.01606055796146392892;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)764.5074218750000909;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)23.23800585741665259;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02137291919072881186;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-4.704200426327285633;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02138780955268715367;
                    } else {
                      sum += (double)-5.465784128189087099;
                    }
                  } else {
                    sum += (double)-0.0213421717159989234;
                  }
                } else {
                  sum += (double)-6.081759217580160026;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02120106465271896085;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-4.447368276723742575;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02127987768668808052;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-4.114613894412392447;
                      } else {
                        sum += (double)-0.02138431511355633544;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-6.171228592005153502;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.02135964807073847255;
            } else {
              sum += (double)-0.02227796765822398495;
            }
          } else {
            sum += (double)-0.01007696874439716409;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-6.942232099260603917;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02170334995835092318;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-5.970151311321988175;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.02089113596952696383;
                      } else {
                        sum += (double)-0.02194805988407962094;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-6.215866967008324195;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.02211557256665477172;
                          } else {
                            sum += (double)-6.535831047103791036;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.0222375205277392865;
                          } else {
                            sum += (double)-0.01287552356719970717;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-6.876954636438411761;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02246608006644829417;
                } else {
                  sum += (double)-0.009070601246933988199;
                }
              } else {
                sum += (double)0.01525753018530932349;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)726.282096354166697;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)22.07610596029516614;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.02030427347877559671;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-4.468990885416666892;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.02031842026419831623;
                    } else {
                      sum += (double)-5.192495029449463395;
                    }
                  } else {
                    sum += (double)-0.02027506380768787086;
                  }
                } else {
                  sum += (double)-5.777670046488444733;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.02014101095497608518;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-4.225000625207989913;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.02021588262292355054;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.908882832347898795;
                      } else {
                        sum += (double)-0.02031509872788710147;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-5.862667555728201307;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.02040519354997624366;
          } else {
            sum += (double)-0.009573119370774790804;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-6.595120098780071771;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.02061818334505559347;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-5.671643812669430851;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.02072682900706823358;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-5.905073251751414176;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.02046321474356395387;
                            } else {
                              sum += (double)-0.02128610561041776109;
                            }
                          } else {
                            sum += (double)-6.209038420351679299;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02112564509142245486;
                          } else {
                            sum += (double)-0.01223174586892128088;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-6.533107288252292477;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02134277542921040466;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719445000000001) ) ) {
                    sum += (double)-0.01493291310966014807;
                  } else {
                    sum += (double)-0.003938669890717223614;
                  }
                }
              } else {
                sum += (double)0.01449465507810766135;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)689.9679687500000682;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)20.97229934121198269;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01928905886135077324;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-4.245541204637096833;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01930249934743041504;
                    } else {
                      sum += (double)-4.932869434356689453;
                    }
                  } else {
                    sum += (double)-0.01926131098201302322;
                  }
                } else {
                  sum += (double)-5.488787424299452766;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01913396066320793842;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-4.013750162182666337;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01920508918462161818;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.713438973390966513;
                      } else {
                        sum += (double)-0.01929934467888472227;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-5.569534476328705352;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5260244999999998949) ) ) {
              sum += (double)-0.01930923125834631618;
            } else {
              sum += (double)-0.02053150181916166273;
            }
          } else {
            sum += (double)-0.009094463695179333049;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-6.265364152211992277;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01958727333886873048;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-5.388061475493217678;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                        sum += (double)-0.01944642616838366742;
                      } else {
                        sum += (double)-0.02014482059246809273;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-5.609819330720820396;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01995930488643696266;
                          } else {
                            sum += (double)-5.898586627252087489;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.02006936285181688123;
                          } else {
                            sum += (double)-0.01162015989422798129;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-6.206452003262397099;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.02027563622950930705;
                } else {
                  sum += (double)-0.008186217498509808926;
                }
              } else {
                sum += (double)0.01376992274414409224;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)655.469596354166697;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)19.92368673232787657;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01832460654006672074;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-4.033264343918011363;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01833737350894010243;
                    } else {
                      sum += (double)-4.68622676467895527;
                    }
                  } else {
                    sum += (double)-0.01829824447127353232;
                  }
                } else {
                  sum += (double)-5.214347712198893703;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01817726290939996811;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-3.81306256338742422;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01824483451543216367;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.527766477254997035;
                      } else {
                        sum += (double)-0.01833437671799877447;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-5.291057651325807853;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01841568718308743413;
          } else {
            sum += (double)-0.008639739352193745101;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-5.952095831008184845;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01860791088357031595;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-5.118658049119626519;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        sum += (double)-0.01863855327068388371;
                      } else {
                        sum += (double)-0.02029482786913952563;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-5.329328518511562862;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.01844208850133411196;
                            } else {
                              sum += (double)-0.01922383557611973687;
                            }
                          } else {
                            sum += (double)-5.603657145700054798;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.01906589333181790344;
                          } else {
                            sum += (double)-0.01103915214538574163;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-5.896128724877391036;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.01925276754301000551;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01577091670284668651;
                } else {
                  sum += (double)0.0151467470700542145;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)622.6960937500000455;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)18.92750240876712908;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01740837586150837182;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-3.831600512432796091;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01742050507227889053;
                    } else {
                      sum += (double)-4.451914930343628285;
                    }
                  } else {
                    sum += (double)-0.01738333254548083892;
                  }
                } else {
                  sum += (double)-4.953630413479275241;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01726839935784006339;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-3.622409391886805885;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01733259290668201155;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.351378334733776665;
                      } else {
                        sum += (double)-0.0174176588060944923;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-5.026504863588150407;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5423344999999998306) ) ) {
              sum += (double)-0.0173851611929903456;
            } else {
              sum += (double)-0.01822847711889049802;
            }
          } else {
            sum += (double)-0.008207752013748343192;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-5.65449129619295654;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01767751517221290494;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-4.862725632047393276;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.01690598876962921132;
                      } else {
                        sum += (double)-0.0178923015521358815;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-5.062862168010483721;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01801327264552308668;
                          } else {
                            sum += (double)-5.32347481093720809;
                          }
                        } else {
                          sum += (double)-0.01809573982692571498;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-5.601322922571224439;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01829921621115470493;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)-0.002011411523689394642;
                  } else {
                    sum += (double)-0.01267971905569235426;
                  }
                }
              } else {
                sum += (double)0.01288622739640149333;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)591.5613281250000455;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)17.98112672204002394;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01653795731292438675;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-3.640020686323925059;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01654948001454467285;
                    } else {
                      sum += (double)-4.229319562911987518;
                    }
                  } else {
                    sum += (double)-0.01651416566416816917;
                  }
                } else {
                  sum += (double)-4.705949056413438747;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01640497989597774695;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-3.441289620854066644;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01646596373304182528;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.183809347798053579;
                      } else {
                        sum += (double)-0.01654677534128125987;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-4.775178967492055726;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01662015657718060591;
          } else {
            sum += (double)-0.00779736475511030782;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-5.371766255696615033;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01679363937521390071;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-4.619589493965190918;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5364780000000001214) ) ) {
                          sum += (double)-0.0168932769443884967;
                        } else {
                          sum += (double)-0.01543475804637320717;
                        }
                      } else {
                        sum += (double)-0.01838547206786741647;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-4.80971890963040849;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01711260920376394754;
                          } else {
                            sum += (double)-5.057301730310132193;
                          }
                        } else {
                          sum += (double)-0.01719095321446690097;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-5.321256966094489727;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01738425660665532044;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)-0.001910841319224108881;
                  } else {
                    sum += (double)-0.01204573226471741983;
                  }
                }
              } else {
                sum += (double)0.01224191649393601908;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)561.9832031250000455;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)17.08206798533067428;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01571105909196287426;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-3.458019888272849673;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01572200514269864874;
                    } else {
                      sum += (double)-4.017853691101074709;
                    }
                  } else {
                    sum += (double)-0.01568845806488080794;
                  }
                } else {
                  sum += (double)-4.47065096961127395;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01558473058931884349;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-3.269224241926027119;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01564266564281982519;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-3.02461863209430426;
                      } else {
                        sum += (double)-0.01571943607938734722;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-4.536420363086764773;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5260244999999998949) ) ) {
              sum += (double)-0.01571965445467048833;
            } else {
              sum += (double)-0.01684171058713121796;
            }
          } else {
            sum += (double)-0.00740749673409895476;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-5.103178725469680543;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.0159539574653208352;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-4.388609597461471168;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.0152160257446678996;
                      } else {
                        sum += (double)-0.016153658691168922;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-4.569232369012642181;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01625697855760136618;
                          } else {
                            sum += (double)-4.804435353079242077;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.01634826424653187601;
                          } else {
                            sum += (double)-0.008722859323024750519;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-5.055194188066837846;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01651504359186633381;
                } else {
                  sum += (double)-0.006731800015698722293;
                }
              } else {
                sum += (double)0.01162982027639042348;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)533.8840494791667197;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)16.22796851173441723;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01492550710667137417;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-3.285118421328965255;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01493590480989828544;
                    } else {
                      sum += (double)-3.816961330413818132;
                    }
                  } else {
                    sum += (double)-0.01490403558496090908;
                  }
                } else {
                  sum += (double)-4.247119127909342318;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01480549374972248491;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-3.105763303435598477;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01486053195110373371;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.873388121181861266;
                      } else {
                        sum += (double)-0.01493346535194959093;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-4.309598853763214166;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01499969254072895143;
          } else {
            sum += (double)-0.007037121599370782521;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-4.848019988044860895;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01515625955350213133;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-4.169179847592213939;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                        sum += (double)-0.01501345179357271159;
                      } else {
                        sum += (double)-0.01565064029982426649;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-4.340770758387030526;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.01495084162083108216;
                            } else {
                              sum += (double)-0.01569350013780833678;
                            }
                          } else {
                            sum += (double)-4.564213909217698095;
                          }
                        } else {
                          sum += (double)-0.01551483586865427637;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-4.802434715487603256;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01568929125051818016;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719445000000001) ) ) {
                    sum += (double)-0.012039204537868501;
                  } else {
                    sum += (double)-0.002214472430447737665;
                  }
                }
              } else {
                sum += (double)0.01104832874103026108;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)507.1898437500000227;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)15.41657094700451403;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01417923164007524328;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-3.120863312752016228;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01418911078135481896;
                    } else {
                      sum += (double)-3.626112371444702553;
                    }
                  } else {
                    sum += (double)-0.01415883299157219034;
                  }
                } else {
                  sum += (double)-4.034762162102594196;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01406521894991220704;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.950475003317935663;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01411750493301130484;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.729718079244284112;
                      } else {
                        sum += (double)-0.01418679203606245526;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-4.094119506232482664;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.6544939999999999092) ) ) {
                sum += (double)-0.0143125733760120534;
              } else {
                sum += (double)-0.01364121998880687275;
              }
            } else {
              sum += (double)-0.01472372194391183969;
            }
          } else {
            sum += (double)-0.006685267727483403324;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-4.605619061182415486;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01439844608339745438;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.960720768912894485;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.01447431739114027685;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-4.123732720616875902;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.0146719224833890393;
                          } else {
                            sum += (double)-4.336003715834931604;
                          }
                        } else {
                          sum += (double)-0.01473909335891651629;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-4.562312899327804594;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01490482558353911982;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)-0.001068971743402273708;
                  } else {
                    sum += (double)-0.01087332293391227861;
                  }
                }
              } else {
                sum += (double)0.01049591180953112629;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)481.8304036458333144;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)14.64573986033067321;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01347027015325883738;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.964819624705981482;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01347965453346725018;
                    } else {
                      sum += (double)-3.444807577133178977;
                    }
                  } else {
                    sum += (double)-0.01345089078201765209;
                  }
                } else {
                  sum += (double)-3.833024673461913778;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01336195862297678318;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.802951235510031225;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                        sum += (double)-0.01292543688128071355;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                          sum += (double)-0.01561844571651472072;
                        } else {
                          sum += (double)-0.01294991128443188921;
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.593233084140863731;
                      } else {
                        sum += (double)-0.01347745204985883842;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.889413747410316091;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01353722183624023884;
          } else {
            sum += (double)-0.006351002847606485556;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-4.375338638547867198;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01367852331555114223;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.762684545881761267;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.01375060206307777283;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.91754662494713779;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01393832643070802395;
                          } else {
                            sum += (double)-4.119203037558915703;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.01401815476783780691;
                          } else {
                            sum += (double)-0.006774020195007324913;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-4.334196265187549635;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.01415357069276932528;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01449679080396890779;
                } else {
                  sum += (double)0.01396183079729477507;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)457.7388020833333258;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)13.91345500436058558;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01279675555829996696;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.816578618531586198;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01280567205369704566;
                    } else {
                      sum += (double)-3.272567066192627383;
                    }
                  } else {
                    sum += (double)-0.01277834619007219702;
                  }
                } else {
                  sum += (double)-3.641373115115695391;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01269386061822019851;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.662804451530410343;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01274104860371678451;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.463571475322981819;
                      } else {
                        sum += (double)-0.01280357982731459079;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.694943360150871214;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
            sum += (double)-0.01270251591821371095;
          } else {
            sum += (double)-0.01332772804575891971;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-4.156571907164559043;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01299459727634602081;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.574549380026228462;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.01229330600394248386;
                      } else {
                        sum += (double)-0.01317135691920586632;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.721669284570590985;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              sum += (double)-0.01277278655013001744;
                            } else {
                              sum += (double)-0.01347831287376045906;
                            }
                          } else {
                            sum += (double)-3.913243256072084453;
                          }
                        } else {
                          sum += (double)-0.01330203196886707052;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-4.11748761198122093;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01345190650231097365;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)-0.0006112085290901039976;
                  } else {
                    sum += (double)-0.01025699488818645512;
                  }
                }
              } else {
                sum += (double)0.0097904565659436317;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)434.8519531250000227;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)13.21778207054750354;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01215691905394018953;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.675749511718750195;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01216538852387519937;
                    } else {
                      sum += (double)-3.108938570022583114;
                    }
                  } else {
                    sum += (double)-0.01213942910913083303;
                  }
                } else {
                  sum += (double)-3.459304584927028969;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01205916650903721826;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.529663760666915451;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01210399628476108158;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.340392859896323063;
                      } else {
                        sum += (double)-0.01216340059561353548;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.510195993973037165;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01221783666798403542;
          } else {
            sum += (double)-0.005391220816157081541;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.948741435701885294;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01234486791536809451;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.395822998213638311;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5364780000000001214) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                            sum += (double)-0.01220128793522116603;
                          } else {
                            sum += (double)-0.01298117481441948308;
                          }
                        } else {
                          sum += (double)-0.01100299105196449884;
                        }
                      } else {
                        sum += (double)-0.01380616938732714266;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.535585365404090741;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01257933971837236001;
                          } else {
                            sum += (double)-3.717581204168811215;
                          }
                        } else {
                          sum += (double)-0.01263693055101340439;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.911613026327139586;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01277931130119144137;
                } else {
                  sum += (double)-0.005259880161982901682;
                }
              } else {
                sum += (double)0.00930093228816986084;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)413.1093098958333485;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)12.55689287644656638;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01154907237371221272;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.541962391843078262;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01155711866808927304;
                    } else {
                      sum += (double)-2.953491128921509112;
                    }
                  } else {
                    sum += (double)-0.01153245862010571741;
                  }
                } else {
                  sum += (double)-3.28633911768595377;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.011456208910260883;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.403180445425409317;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01149879604954913773;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.223372891074733015;
                      } else {
                        sum += (double)-0.01155523056311231513;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.334686686628955954;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
            sum += (double)-0.01145699885159273679;
          } else {
            sum += (double)-0.01205092469809749406;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.751305454799107153;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01172762455396261089;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.226031229404804357;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.01178942225427750783;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.358806807906539404;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                              sum += (double)-0.01310187036219029322;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                sum += (double)-0.009300848111467823268;
                              } else {
                                sum += (double)-0.0119706908406846356;
                              }
                            }
                          } else {
                            sum += (double)-3.531702276903712523;
                          }
                        } else {
                          sum += (double)-0.01200508405541967846;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.716031586559788824;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.01214034578781607657;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)-0.0003176536411046981812;
                  } else {
                    sum += (double)-0.009481150532762210037;
                  }
                }
              } else {
                sum += (double)0.008835884657773105527;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)392.453841145833394;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)11.92904679405498136;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.01097161884733107579;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.414864620085685587;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01097926278048993488;
                    } else {
                      sum += (double)-2.805816614151001254;
                    }
                  } else {
                    sum += (double)-0.01095583509469355218;
                  }
                } else {
                  sum += (double)-3.122023264567057588;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01088339860296054333;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.283020985199036623;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                        sum += (double)-0.0104619738683905672;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                          sum += (double)-0.01302033213183129146;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                            sum += (double)-0.009149693204883502934;
                          } else {
                            sum += (double)-0.01214904191607203698;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.112204654951741034;
                      } else {
                        sum += (double)-0.01097746861240675963;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.167952195938024573;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.01101767970814627497;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.563740050300719275;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01114124300194094599;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-3.064729734326972377;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.01119995104711004816;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.190866206242488179;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01135285438726849755;
                          } else {
                            sum += (double)-3.355116957247614273;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.01142004492946271238;
                          } else {
                            sum += (double)-0.004538115710020064995;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.530230693636632999;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.01152893448742283583;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.0135216961925228446;
                } else {
                  sum += (double)0.01312197328545153252;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)372.8311848958333599;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)11.33259562936058806;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.0104230378397079642;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.294121907552083339;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.01043029957717881394;
                    } else {
                      sum += (double)-2.665525922775268786;
                    }
                  } else {
                    sum += (double)-0.01040804381094087919;
                  }
                } else {
                  sum += (double)-2.965921624501546283;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.01033922829110885122;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.168870163737639523;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.01037766361709070717;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-2.006594292203286667;
                      } else {
                        sum += (double)-0.01042859546871106186;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-3.009553967492055282;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.01047618250780648491;
          } else {
            sum += (double)-0.003991177610375664341;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.385552687872024347;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01058418097468429714;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.911493649508783754;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5364780000000001214) ) ) {
                          sum += (double)-0.01065301069274685215;
                        } else {
                          sum += (double)-0.00930337285372748353;
                        }
                      } else {
                        sum += (double)-0.01196639154809545774;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-3.031321964100895272;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.01078521175095318446;
                          } else {
                            sum += (double)-3.187360838930050289;
                          }
                        } else {
                          sum += (double)-0.0108345882386041651;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.353718388795100314;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.0109568813953714473;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)1.97268273357463939e-05;
                  } else {
                    sum += (double)-0.008941591531038284996;
                  }
                }
              } else {
                sum += (double)0.00822242322293194848;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)354.1895833333333599;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)10.76596480588862015;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.009901886092326291078;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.179415191322244816;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.009908785005178588276;
                    } else {
                      sum += (double)-2.53224973869323744;
                    }
                  } else {
                    sum += (double)-0.009887641640573147442;
                  }
                } else {
                  sum += (double)-2.817624876234266829;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.009822266818512054645;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-2.060427200286432114;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.00985878040068389333;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.906263826126442851;
                      } else {
                        sum += (double)-0.00990716587767561524;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.859076613086765306;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.009943455696170664868;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.216275450691344684;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.01005497219323680212;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.765918348135192772;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                        sum += (double)-0.009909104180414622653;
                      } else {
                        sum += (double)-0.0104781285956348641;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.879756421037549252;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6190270000000001049) ) ) {
                                  sum += (double)-0.009788126692012117172;
                                } else {
                                  sum += (double)-0.0124666305801023336;
                                }
                              } else {
                                sum += (double)-0.007552640044102163115;
                              }
                            } else {
                              sum += (double)-0.0104699919661085817;
                            }
                          } else {
                            sum += (double)-3.027993445482082713;
                          }
                        } else {
                          sum += (double)-0.01029285874086791064;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.186033789216532242;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.01040519627510592612;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01274060706297556501;
                } else {
                  sum += (double)0.01243778356195737907;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)336.4800781250000341;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)10.22766544117647136;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.009406792050647682854;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-2.070444519699261132;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.009413345995444888023;
                    } else {
                      sum += (double)-2.40563777160644543;
                    }
                  } else {
                    sum += (double)-0.009393259129040432143;
                  }
                } else {
                  sum += (double)-2.676744240654839402;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.009331153547945654145;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.957405749586001109;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.009365841675777262024;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.810950564621086389;
                      } else {
                        sum += (double)-0.009411807269228938955;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.71612231798764725;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.009446282938874721313;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-3.055462394593254416;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.009552223418860621845;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.627622641891729671;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.009602558076255032424;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.735769062096576665;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                              sum += (double)-0.01085046742452138238;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                sum += (double)-0.007239495935263457263;
                              } else {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                    sum += (double)-0.009654544052340443758;
                                  } else {
                                    sum += (double)-0.007175007310103286538;
                                  }
                                } else {
                                  sum += (double)-0.009946492568931389333;
                                }
                              }
                            }
                          } else {
                            sum += (double)-2.876593725695581583;
                          }
                        } else {
                          sum += (double)-0.009778215877074281082;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-3.026731800356122104;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.009888778082726864399;
                } else {
                  sum += (double)-0.004157257392170265152;
                }
              } else {
                sum += (double)0.007647202367132361484;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)319.6561848958333485;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)9.716282972040025001;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.008936451800814119648;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.966922043010752574;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.008942678645156547021;
                    } else {
                      sum += (double)-2.285355712890625224;
                    }
                  } else {
                    sum += (double)-0.008923596115975979473;
                  }
                } else {
                  sum += (double)-2.542906703948974556;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.008864595988942755231;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.859534756116886456;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.008897549581796133228;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.720403972424959127;
                      } else {
                        sum += (double)-0.008941216717369823361;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.580316433664096021;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
            sum += (double)-0.008840444101313849057;
          } else {
            sum += (double)-0.009404649040932321069;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.902688472687252386;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.009074612130370113272;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.496241774845644912;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.008410873309498674219;
                      } else {
                        sum += (double)-0.009222527123293805182;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.598979210921502414;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.009246970689845155147;
                          } else {
                            sum += (double)-2.732763096244035239;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.009303759658201925242;
                          } else {
                            sum += (double)-0.002765926569700241124;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.875394418036524513;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.009394338940987428943;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)0.0005138010313005551746;
                  } else {
                    sum += (double)-0.008226624503731728294;
                  }
                }
              } else {
                sum += (double)0.007264841009270061462;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)303.6733723958333826;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)9.230466236787684409;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.008489629301114185941;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.868575898857526951;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.008495544728698588288;
                    } else {
                      sum += (double)-2.171087518692016882;
                    }
                  } else {
                    sum += (double)-0.008477416584111349337;
                  }
                } else {
                  sum += (double)-2.41576261308458129;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.008421366129713577994;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.766558392197800531;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                        sum += (double)-0.008013882963888106434;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                          sum += (double)-0.01044432374432837686;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                            sum += (double)-0.006767216593762150068;
                          } else {
                            sum += (double)-0.009616597820926645404;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.634383495588948243;
                      } else {
                        sum += (double)-0.00849415651495525996;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.451300630731097829;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            sum += (double)-0.008534187526090064244;
          } else {
            sum += (double)-0.00237369964068586195;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.757553933764261167;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.008620881470271037766;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.371430012437163892;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.00866630871516255695;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.469031526831820145;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.008784622076316892653;
                          } else {
                            sum += (double)-2.59612497569558176;
                          }
                        } else {
                          sum += (double)-0.008824839591304601757;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.731624644186218642;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.008921568378014468198;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.0119939432789882023;
                } else {
                  sum += (double)0.01172534566450243211;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)288.4895833333333712;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)8.768947907310119305;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.008065148119077129515;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.775147245673723395;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.008070767009884466034;
                    } else {
                      sum += (double)-2.062533342361450472;
                    }
                  } else {
                    sum += (double)-0.008053545633640725454;
                  }
                } else {
                  sum += (double)-2.294973191155327719;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.008000298072029614349;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.678230697291376305;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.008030038554724684349;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.552664435537237875;
                      } else {
                        sum += (double)-0.008069448133474562898;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.328735674841929448;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.008099006930860895917;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.619675477043030831;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.008189837805673890608;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.252858052488233565;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.008232993379432554035;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.345580330873147101;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                              sum += (double)-0.00940636453153132629;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                sum += (double)-0.005975941630170556601;
                              } else {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                  sum += (double)-0.007803836092725395697;
                                } else {
                                  sum += (double)-0.008547587953819902121;
                                }
                              }
                            }
                          } else {
                            sum += (double)-2.466318813483872052;
                          }
                        } else {
                          sum += (double)-0.008383597583962362418;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.595044022328470312;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.008478543357902337818;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)0.0007298041752580068046;
                  } else {
                    sum += (double)-0.007759162411093712026;
                  }
                }
              } else {
                sum += (double)0.006746592575853522025;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)274.0651692708333371;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)8.330496427974599882;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.007661890647140773454;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.686390105216734048;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.007667228669391995717;
                    } else {
                      sum += (double)-1.959406059265136779;
                    }
                  } else {
                    sum += (double)-0.007650868544198172541;
                  }
                } else {
                  sum += (double)-2.180224867926703336;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.00760028311007079644;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.594318654522692835;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.007628536464751024988;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.475030579244283935;
                      } else {
                        sum += (double)-0.007665976065199405463;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.212298993471652153;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
            sum += (double)-0.007567213467741151951;
          } else {
            sum += (double)-0.008103185116598464119;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.488692898220486338;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.007780345703538331902;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.140215772618361267;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5364780000000001214) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                            sum += (double)-0.007635123383478454456;
                          } else {
                            sum += (double)-0.008339870681208888872;
                          }
                        } else {
                          sum += (double)-0.006528078502732920924;
                        }
                      } else {
                        sum += (double)-0.009057946353552332255;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.22830042608103529;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.007928121805565725017;
                          } else {
                            sum += (double)-2.34300301831639457;
                          }
                        } else {
                          sum += (double)-0.007964417485966240884;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.465292637581328883;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.395000000000000462) ) ) {
                sum += (double)-0.008049334554231863531;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                  sum += (double)0.01285596907138824609;
                } else {
                  sum += (double)-0.01133690208196640181;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)260.3618489583333826;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)7.913972432345630637;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9815244999999999109) ) ) {
              sum += (double)-0.007111262799493871418;
            } else {
              sum += (double)-0.007937119094849292775;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.602070680023521376;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.007283867201278645953;
                    } else {
                      sum += (double)-1.861437025070190376;
                    }
                  } else {
                    sum += (double)-0.007268325223024245732;
                  }
                } else {
                  sum += (double)-2.071214625040690205;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.007220268506623273019;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.514602983022074634;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8726894999999998959) ) ) {
                        sum += (double)-0.005857096453841661304;
                      } else {
                        sum += (double)-0.007419114518310210814;
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.401280100542799945;
                      } else {
                        sum += (double)-0.007282677228520025373;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-2.101683647888528572;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.007309353908070358695;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.364256921192956273;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.007391328527916695562;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-2.033204306930792349;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.007430276298123993789;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.116885575949296605;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.007531715356208082586;
                          } else {
                            sum += (double)-2.225853551076558023;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.007579928541540730327;
                          } else {
                            sum += (double)-0.001368988901376724365;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.342027017972446945;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                  sum += (double)-0.007652149571155177424;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.150000000000000799) ) ) {
                    sum += (double)0.001095780479701479035;
                  } else {
                    sum += (double)-0.007466433197259903475;
                  }
                }
              } else {
                sum += (double)0.006316302716732025493;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)247.3438151041666515;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)7.518275337423233395;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.00691485603772271952;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.521966670866935489;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.006919673871340764615;
                    } else {
                      sum += (double)-1.768364559173583928;
                    }
                  } else {
                    sum += (double)-0.006904908971820804785;
                  }
                } else {
                  sum += (double)-1.967653350830078196;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.006859255072860314002;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.438872746279950654;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.006884754181855037847;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.331215089783632788;
                      } else {
                        sum += (double)-0.006918543532676221797;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.996599436614473255;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.006943885891251175627;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.246044805617559259;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.007021761865346198839;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.931543350219726563;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.006392094519574409613;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1183190000000000214) ) ) {
                          sum += (double)-0.007821813098021917349;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                            sum += (double)-0.006729804297987068869;
                          } else {
                            sum += (double)-0.007388088779159803637;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-2.011041414092408885;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7115640000000001963) ) ) {
                              sum += (double)-0.006960136256841773124;
                            } else {
                              sum += (double)-0.007589436594523904685;
                            }
                          } else {
                            sum += (double)-2.114560416215908401;
                          }
                        } else {
                          sum += (double)-0.007187887074530005874;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.224924697635301651;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.395000000000000462) ) ) {
                sum += (double)-0.007264936050589247685;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                  sum += (double)0.01225570631027221753;
                } else {
                  sum += (double)-0.01074130490422248868;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)234.9766276041666515;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)7.14236426531949764;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.006569113335238588314;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.445868641843078173;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.006573690553274291054;
                    } else {
                      sum += (double)-1.679946323394775565;
                    }
                  } else {
                    sum += (double)-0.006559663241980592981;
                  }
                } else {
                  sum += (double)-1.869270629882812562;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.006516292903550147814;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.366929221008176931;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.006540516525148462601;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.264655015701638296;
                      } else {
                        sum += (double)-0.006572616006328852248;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.896768330719511342;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5260244999999998949) ) ) {
              sum += (double)-0.006546551259919449091;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5228829999999998757) ) ) {
                sum += (double)-0.009957531567328793687;
              } else {
                sum += (double)-0.006331901872568474095;
              }
            }
          } else {
            sum += (double)-0.0007529506629163568512;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.133742540147569589;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.00667067409768164199;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.834967670544900731;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.006705824276307569692;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.910489508908698397;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                              sum += (double)-0.007815047572443689985;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                sum += (double)-0.004556145754634824407;
                              } else {
                                sum += (double)-0.006810909256787791091;
                              }
                            }
                          } else {
                            sum += (double)-2.008833043446797806;
                          }
                        } else {
                          sum += (double)-0.006828492661604912591;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.113678710167340213;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.006893935212065287546;
              } else {
                sum += (double)0.005910359864885156994;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)223.2277994791666629;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)6.785238272111046243;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.006240658055937141693;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.373574848790322767;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.00624500595748269955;
                    } else {
                      sum += (double)-1.595949010848999094;
                    }
                  } else {
                    sum += (double)-0.006231679750974532944;
                  }
                } else {
                  sum += (double)-1.775806698269314587;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.006190478296152183632;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.298582789670623239;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                        sum += (double)-0.005674738686855266591;
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                            sum += (double)-0.006227108744766425043;
                          } else {
                            sum += (double)-0.008096959434166087557;
                          }
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                            sum += (double)-0.004603708066012827775;
                          } else {
                            sum += (double)-0.007310619991917849912;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.20142174053909212;
                      } else {
                        sum += (double)-0.006243985044882010942;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.801931245448225916;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.006266856947130055276;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-2.027056284102182637;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.00633713992090594036;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.743217968549884977;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.006370533185384757296;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.81496440311442786;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.006457504511134833439;
                          } else {
                            sum += (double)-1.908389524357047895;
                          }
                        } else {
                          sum += (double)-0.006487067977245301181;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-2.007995489944794709;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.395000000000000462) ) ) {
                sum += (double)-0.006556992312394541861;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                  sum += (double)0.01168031495809555148;
                } else {
                  sum += (double)-0.01017964899539947586;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)212.06640625;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)6.445982548514789023;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9815244999999999109) ) ) {
              sum += (double)-0.005769468372739456306;
            } else {
              sum += (double)-0.006554032070272612816;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.304896410870295842;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.005932755801155101087;
                    } else {
                      sum += (double)-1.516151922225952298;
                    }
                  } else {
                    sum += (double)-0.005920095706435013136;
                  }
                } else {
                  sum += (double)-1.687016135321723231;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.005880954331674036195;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.233653763776860535;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.005902815955581303814;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.141350779139009619;
                      } else {
                        sum += (double)-0.005931786410665117019;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.711833811614473122;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.005953514477672746004;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.925703405955481173;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.006020283118105126778;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.65605837712522419;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.006052006550934550116;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.724216159048922892;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.006134629436583321528;
                          } else {
                            sum += (double)-1.812970532628590536;
                          }
                        } else {
                          sum += (double)-0.00616271474849405549;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.907595738552346321;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8962870000000001669) ) ) {
                  sum += (double)-0.005391164975956019498;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9083395000000000774) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9041700000000000292) ) ) {
                      sum += (double)-0.006243090366395257634;
                    } else {
                      sum += (double)-0.008201466228853182203;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9124955000000000149) ) ) {
                      sum += (double)-0.00395900013450628703;
                    } else {
                      sum += (double)-0.006206829568177853369;
                    }
                  }
                }
              } else {
                sum += (double)0.005527644536711953487;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)201.4630208333333314;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)6.123680694090491983;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.005632193905891417184;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.239651377688172129;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.005636117663886761053;
                    } else {
                      sum += (double)-1.440344036102295;
                    }
                  } else {
                    sum += (double)-0.00562409160503431118;
                  }
                } else {
                  sum += (double)-1.602665481567383088;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.005586906037005108169;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.171970799196564439;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.005607675400635551109;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.084282976881902227;
                      } else {
                        sum += (double)-0.005635196668602124488;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.626242811127571075;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.005655838506072867478;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.829416765485491148;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.005719268862960507314;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.573255007384253501;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5487285000000000634) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5364780000000001214) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                            sum += (double)-0.005581342278834638959;
                          } else {
                            sum += (double)-0.006225540774661725285;
                          }
                        } else {
                          sum += (double)-0.004504338375124370027;
                        }
                      } else {
                        sum += (double)-0.00690771287464233847;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.638005191987736087;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.00582789793771388686;
                          } else {
                            sum += (double)-1.722322712972492731;
                          }
                        } else {
                          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                            sum += (double)-0.005867624174619418854;
                          } else {
                            sum += (double)3.276929259300232123e-05;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.812216311674388791;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.005920495584620134866;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01231561539073785204;
                } else {
                  sum += (double)0.01213159033407767637;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)191.3899088541666913;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)5.817497114701705385;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.005350584291014650988;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.177668378276209848;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.005354312105749367556;
                    } else {
                      sum += (double)-1.368326507568359496;
                    }
                  } else {
                    sum += (double)-0.005342886557820687894;
                  }
                } else {
                  sum += (double)-1.522532577514648544;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.005307561421567308542;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.113372480845112866;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.005327291388862079313;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-1.030069105965750742;
                      } else {
                        sum += (double)-0.005353436532480588747;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.5449304268185029;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5260244999999998949) ) ) {
              sum += (double)-0.005325413055970711768;
            } else {
              sum += (double)-0.006224420839881009831;
            }
          } else {
            sum += (double)0.0001785083250565962427;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.737946632021949434;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.005433305531371679549;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.494591776529947902;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.005461935909393714206;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.556105906603343136;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7115640000000001963) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                sum += (double)-0.006503293472251434407;
                              } else {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                  sum += (double)-0.003407336771488189697;
                                } else {
                                  sum += (double)-0.005335019118329483237;
                                }
                              }
                            } else {
                              sum += (double)-0.005948417475664422895;
                            }
                          } else {
                            sum += (double)-1.636207219654928657;
                          }
                        } else {
                          sum += (double)-0.00556184997596382083;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.721605001263061929;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.005615558965487666906;
              } else {
                sum += (double)0.005089177800850434863;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)181.8204427083333314;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)5.526620369161514112;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.005083054872238835023;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.118786096060147894;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.005086596373917992575;
                    } else {
                      sum += (double)-1.299910055160522493;
                    }
                  } else {
                    sum += (double)-0.005075742291713033344;
                  }
                } else {
                  sum += (double)-1.446404830084906834;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.005042182879433745532;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.057704246165060757;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8726894999999998959) ) ) {
                        sum += (double)-0.003767352271564200668;
                      } else {
                        sum += (double)-0.005220998511673879613;
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.9785659761357128339;
                      } else {
                        sum += (double)-0.005085765166957843288;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.467684057203389791;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.005104394337682357716;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.651048680865575324;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.005161640207753591565;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.419862640881147664;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                        sum += (double)-0.004563907952331169512;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1183190000000000214) ) ) {
                          sum += (double)-0.005922140058070894664;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3905180000000000873) ) ) {
                            sum += (double)-0.004884731768568561019;
                          } else {
                            sum += (double)-0.0054860559488159686;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.478298906722979034;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.005259677739693727205;
                          } else {
                            sum += (double)-1.554396559663875577;
                          }
                        } else {
                          sum += (double)-0.005283757431295470729;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.635524809924586043;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.00534369289265533131;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01159746802101532803;
                } else {
                  sum += (double)0.01155601026179889877;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)172.7294270833333485;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)5.250291499989555355;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.004828902170402580435;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.062845944640457008;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.004832266329095521659;
                    } else {
                      sum += (double)-1.234914859771728546;
                    }
                  } else {
                    sum += (double)-0.004821955396230575425;
                  }
                } else {
                  sum += (double)-1.374085947672526231;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.004790073884983680683;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-1.004818323224359933;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.004807880631016590162;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.9296373596765046265;
                      } else {
                        sum += (double)-0.004831476811613284739;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.394299812101374991;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.004849174679432529701;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.568497517903645999;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.004903558439696090003;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.348870391011889547;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.004929397168139074137;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.404385575949296694;
                      } else {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                            sum += (double)-0.004996693840695518377;
                          } else {
                            sum += (double)-1.476675876457534287;
                          }
                        } else {
                          sum += (double)-0.005019569537237290879;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.553748810103263267;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8962870000000001669) ) ) {
                  sum += (double)-0.004277619081333216937;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9083395000000000774) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9041700000000000292) ) ) {
                      sum += (double)-0.005064045753192515827;
                    } else {
                      sum += (double)-0.006947405314316698784;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9124955000000000149) ) ) {
                      sum += (double)-0.002917062522222598278;
                    } else {
                      sum += (double)-0.005066793497219828669;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01101759516944487982;
                } else {
                  sum += (double)0.01097820946015417611;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)164.0929687500000114;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)4.987779423514790089;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.004587456852157955484;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-1.00970343476982527;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.004590652941033997875;
                    } else {
                      sum += (double)-1.17316947555542006;
                    }
                  } else {
                    sum += (double)-0.004580857558077389667;
                  }
                } else {
                  sum += (double)-1.305381596883138151;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8777459999999999152) ) ) {
                    sum += (double)-0.00464907110007150258;
                  } else {
                    sum += (double)-0.003574514876470550641;
                  }
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.9545777233812438034;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.004567486551382856849;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.8831552691925736998;
                      } else {
                        sum += (double)-0.004589902909155703717;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.324585973879711887;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5885939999999999506) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.6544939999999999092) ) ) {
              sum += (double)-0.004671462399141821514;
            } else {
              sum += (double)-0.004096863319133890388;
            }
          } else {
            sum += (double)-0.004976949930058475156;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.490071633959573427;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.004658380297377249721;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.281426176477651113;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.004682927258494156558;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.334167002273081382;
                      } else {
                        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.004758969769321678457;
                            } else {
                              sum += (double)-1.45253911748662734;
                            }
                          } else {
                            sum += (double)-0.004783080930641434893;
                          }
                        } else {
                          sum += (double)0.6948251952840522883;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.476061588130914926;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.395000000000000462) ) ) {
                sum += (double)-0.004820832153836634992;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                  sum += (double)0.01219951820373535271;
                } else {
                  sum += (double)-0.01137381836771965068;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)155.8882812500000057;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)4.738387425060579083;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9815244999999999109) ) ) {
              sum += (double)-0.004206885315603640062;
            } else {
              sum += (double)-0.004952220925089402016;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.9592184087281586669;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.004361120312101414605;
                    } else {
                      sum += (double)-1.114510059356689453;
                    }
                  } else {
                    sum += (double)-0.004351814426529018558;
                  }
                } else {
                  sum += (double)-1.240112224155002218;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.004323041533574551419;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.9068483488071280574;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                        sum += (double)-0.003955122569315536706;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                          sum += (double)-0.006120403827680436296;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                            sum += (double)-0.002801815369437895675;
                          } else {
                            sum += (double)-0.00537338188573634884;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.8389978910747327712;
                      } else {
                        sum += (double)-0.00436040793742629041;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.258356225827319541;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.004376380012386394021;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.415568450443328352;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.004425461399873955454;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.217354546218621936;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.004448780822821860395;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.267458376110109697;
                      } else {
                        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.004521021188148693741;
                            } else {
                              sum += (double)-1.379913293420373499;
                            }
                          } else {
                            sum += (double)-0.004543926976678869072;
                          }
                        } else {
                          sum += (double)0.6600839379158887077;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.402257800177444835;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.004574364148955185026;
              } else {
                sum += (double)0.004454686289483851189;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)148.0938802083333314;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)4.501469413226938165;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.004140179997920305326;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.9112575604838710763;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.004143064540125980522;
                    } else {
                      sum += (double)-1.058785602569580098;
                    }
                  } else {
                    sum += (double)-0.004134223971971505256;
                  }
                } else {
                  sum += (double)-1.178106320699056075;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.00410688972494210186;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.8615061545226927464;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.004122156654424244046;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.7970479534980946523;
                      } else {
                        sum += (double)-0.004142387552936542018;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.195438212594070126;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.004157560936387483426;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.344789554656498076;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.004204188448979815328;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.156487044871179259;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.004226341864246973244;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.204085834209735584;
                      } else {
                        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6190270000000001049) ) ) {
                                    sum += (double)-0.003890102194767332353;
                                  } else {
                                    sum += (double)-0.006442685195537397116;
                                  }
                                } else {
                                  sum += (double)-0.001898371034085449566;
                                }
                              } else {
                                sum += (double)-0.00448334036385895137;
                              }
                            } else {
                              sum += (double)-1.310918364653716139;
                            }
                          } else {
                            sum += (double)-0.004316730469163472354;
                          }
                        } else {
                          sum += (double)0.6270797137171030267;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.332145792001429463;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.004352923089022724817;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01085662084321181026;
                } else {
                  sum += (double)0.0107649777984867509;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)140.6891927083333371;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)4.276396954378342663;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003933170808043884997;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.8656953545026881969;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003935911180995086377;
                    } else {
                      sum += (double)-1.005845535278320435;
                    }
                  } else {
                    sum += (double)-0.00392751283249989213;
                  }
                } else {
                  sum += (double)-1.119202156066894549;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.003901545063847499089;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.8184308096554894218;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003916048748162446157;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.7571958269391741991;
                      } else {
                        sum += (double)-0.003935268105498487996;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.135666501320014676;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.003949683029955841466;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.277550339471726248;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003993978888744668596;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.098662371192473675;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.00401502478960323074;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.143879782304464854;
                      } else {
                        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                sum += (double)-0.005009394385166712239;
                              } else {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6190270000000001049) ) ) {
                                  sum += (double)-0.003150432439422310923;
                                } else {
                                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                    sum += (double)-0.006120551098406487069;
                                  } else {
                                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                      sum += (double)-0.001803452570480529663;
                                    } else {
                                      sum += (double)-0.004259173439807206925;
                                    }
                                  }
                                }
                              }
                            } else {
                              sum += (double)-1.245370950784769226;
                            }
                          } else {
                            sum += (double)-0.004100894035636264666;
                          }
                        } else {
                          sum += (double)0.5957257384180345561;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.265537529112036763;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.004128461702786608359;
              } else {
                sum += (double)0.00408682172948663866;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)133.6546874999999943;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)4.062575983873663255;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003736512382385123992;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.8224098254788305695;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003739115654765090557;
                    } else {
                      sum += (double)-0.9555530815124511079;
                    }
                  } else {
                    sum += (double)-0.003731137085461636721;
                  }
                } else {
                  sum += (double)-1.063241267734103657;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.003706467957069565708;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.7775095972521551824;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003720246396733609909;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.7193356621534304773;
                      } else {
                        sum += (double)-0.003738504623476400848;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.078882848879711753;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5260244999999998949) ) ) {
              sum += (double)-0.003708171729664877687;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5228829999999998757) ) ) {
                sum += (double)-0.006883916401140318352;
              } else {
                sum += (double)-0.003439568240830968935;
              }
            }
          } else {
            sum += (double)0.001523262126879258672;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.213673124767485234;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003794279858039253592;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-1.043729875908523397;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                      sum += (double)-0.003814273623548066015;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                        sum += (double)-1.086685728415464736;
                      } else {
                        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.00387621057166166955;
                            } else {
                              sum += (double)-1.183102187881240663;
                            }
                          } else {
                            sum += (double)-0.003895849407654240933;
                          }
                        } else {
                          sum += (double)0.5659394336017695704;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.202260842308261246;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.003928853744706375072;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.01024428935100634916;
                } else {
                  sum += (double)0.01024146349673780293;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)126.9720052083333286;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)3.859444945636280266;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003549686842085552144;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.7812899025537634046;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003552159756885892115;
                    } else {
                      sum += (double)-0.9077758235931396857;
                    }
                  } else {
                    sum += (double)-0.00354458014470916509;
                  }
                } else {
                  sum += (double)-1.010078226725260597;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.00352114444349094181;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.7386344306125602888;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003534234033749288767;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.6833692249498870552;
                      } else {
                        sum += (double)-0.003551579541623345587;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.024938559666865201;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.003564588874490239815;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.152989637586805616;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003604566089933929247;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.9915428620218579292;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.003693167911038879123;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-1.032352336655315339;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6190270000000001049) ) ) {
                                    sum += (double)-0.003317006603900371064;
                                  } else {
                                    sum += (double)-0.005620712930771390448;
                                  }
                                } else {
                                  sum += (double)-0.001519469539587846914;
                                }
                              } else {
                                sum += (double)-0.003993475765506612762;
                              }
                            } else {
                              sum += (double)-1.123947427652261633;
                            }
                          } else {
                            sum += (double)-0.00379792525280650637;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.7203040100820362612;
                    }
                  }
                }
              } else {
                sum += (double)-1.142147182139688466;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                sum += (double)-0.003732411167010453792;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9887835000000001484) ) ) {
                  sum += (double)-0.009732073731720448928;
                } else {
                  sum += (double)0.009729389216129979978;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)120.6234375000000085;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)3.666470157398897367;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003372202468044992445;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.7422251186575941073;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003374552068176127351;
                    } else {
                      sum += (double)-0.8623864631652833346;
                    }
                  } else {
                    sum += (double)-0.003367351323296798819;
                  }
                } else {
                  sum += (double)-0.9595750003390842719;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.003345087210237536642;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.7017024599272629892;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003357522273959016434;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.6492005929014736942;
                      } else {
                        sum += (double)-0.003374000547214167905;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.9736910243492342687;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.003386359441937431772;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.095339607359871126;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003424337657570905233;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.9419654429284602948;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.003508509382260657956;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.9807350615150908224;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6988345000000001361) ) ) {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                  sum += (double)-0.004399263830268168064;
                                } else {
                                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                    sum += (double)-0.001548464411599004492;
                                  } else {
                                    sum += (double)-0.003364279582780932421;
                                  }
                                }
                              } else {
                                sum += (double)-0.003988944059172294145;
                              }
                            } else {
                              sum += (double)-1.067750673036317544;
                            }
                          } else {
                            sum += (double)-0.003608028956656698406;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.6842888038605452472;
                    }
                  }
                }
              } else {
                sum += (double)-1.085039878869282326;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.395000000000000462) ) ) {
                sum += (double)-0.003544404623459372801;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                  sum += (double)0.01253678143024444629;
                } else {
                  sum += (double)-0.01233788684010505773;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)114.5921875000000085;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)3.483152305888619793;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003203592402527581044;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.7051142210601478721;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003205824322785925939;
                    } else {
                      sum += (double)-0.8192685508728028143;
                    }
                  } else {
                    sum += (double)-0.003198983473604733851;
                  }
                } else {
                  sum += (double)-0.9115965991550022407;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.003177832868227380408;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.6666170193747622541;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003189646191021714046;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.6167406426336532466;
                      } else {
                        sum += (double)-0.003205300397336236298;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.9250070302499889818;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.00321704159379917207;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-1.040573013547867021;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003253120741814038985;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.8948682732920829608;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                          sum += (double)-0.002669791148011458476;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1575140000000000151) ) ) {
                            sum += (double)-0.003927356259960354361;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2926575000000000704) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2437405000000000266) ) ) {
                                sum += (double)-0.003241186240659945598;
                              } else {
                                sum += (double)-0.002118895222193593365;
                              }
                            } else {
                              sum += (double)-0.00355765552895863325;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.9316973737841657277;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.003408067943292950128;
                            } else {
                              sum += (double)-1.014362836958051961;
                            }
                          } else {
                            sum += (double)-0.003427627521185185218;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.6500744217634202293;
                    }
                  }
                }
              } else {
                sum += (double)-1.030788635831526134;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.00336298218039585671;
              } else {
                sum += (double)0.00354874648831107406;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)108.8626302083333286;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)3.30899393826245003;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.003043412804952447259;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.6698581621723791457;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.003045532939866204495;
                    } else {
                      sum += (double)-0.7783046760559082511;
                    }
                  } else {
                    sum += (double)-0.003039034416917215081;
                  }
                } else {
                  sum += (double)-0.86601672702365462;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.003018941083047095922;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.6332859805341183312;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.003030163942756364942;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.5859033512889890716;
                      } else {
                        sum += (double)-0.003045035468035714107;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.8787569768011233018;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.003056189518587821945;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.9885441177610367891;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.003090464867486572391;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.8501244383431523222;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.003166429759311327041;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.8851125776937545098;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6225755000000000594) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.622073500000000057) ) ) {
                                  sum += (double)-0.003101621931055923917;
                                } else {
                                  sum += (double)-0.001104878701946952063;
                                }
                              } else {
                                sum += (double)-0.00343882765116669065;
                              }
                            } else {
                              sum += (double)-0.9636451331702796663;
                            }
                          } else {
                            sum += (double)-0.003256246073756805318;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.6175706729292870234;
                    }
                  }
                }
              } else {
                sum += (double)-0.9792489518126479275;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                sum += (double)-0.003202568635431413905;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9697240000000001414) ) ) {
                  sum += (double)-0.01562583396832148072;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                    sum += (double)0.02905837711656377234;
                  } else {
                    sum += (double)-0.00817236319029082843;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)103.4195312500000057;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)3.143542186716661302;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.002891242153525820559;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.6363657436575941295;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                      sum += (double)-0.002893256451620511687;
                    } else {
                      sum += (double)-0.7393898162841797683;
                    }
                  } else {
                    sum += (double)-0.002887082805875192115;
                  }
                } else {
                  sum += (double)-0.822716259426540919;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                  sum += (double)-0.002867994160014426634;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                    sum += (double)-0.6016217523849518578;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      sum += (double)-0.002878655598744207789;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.5566079992997019499;
                      } else {
                        sum += (double)-0.002892783561497308618;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.8348183023054048801;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002903379985249033169;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.9391169859871031367;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002935941306281636409;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.8076178337055477385;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.09100630000000002606) ) ) {
                          sum += (double)-0.002377980243910852044;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1575140000000000151) ) ) {
                            sum += (double)-0.003572667009017049984;
                          } else {
                            sum += (double)-0.002966381078922551793;
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.8408578378182870461;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.003075781271656199359;
                            } else {
                              sum += (double)-0.915461689717060878;
                            }
                          } else {
                            sum += (double)-0.003093433731930167116;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.5866921049356460527;
                    }
                  }
                }
              } else {
                sum += (double)-0.9302869730567331352;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5550000000000000488) ) ) {
                sum += (double)-0.003042440183246071517;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9697240000000001414) ) ) {
                  sum += (double)-0.01484454317639271465;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                    sum += (double)0.02760545845542635227;
                  } else {
                    sum += (double)-0.007763745728880167007;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)98.24843750000000853;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.986367879449365326;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.002746680018710217878;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.6045468960013441473;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002713301089944703155;
                      } else {
                        sum += (double)-0.7368935721261160587;
                      }
                    } else {
                      sum += (double)-0.002529950122467697002;
                    }
                  } else {
                    sum += (double)-0.7815793397691515043;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.00269343384522428668;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.5715413432092261159;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.00276114791793216326;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.5481821178716455023;
                        } else {
                          sum += (double)-0.002746350781454806513;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.7610816942463660695;
              }
            }
          }
        } else {
          sum += (double)-0.7930777253404176497;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002758210994763036356;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.8921613711402530678;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002789144405039350062;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.7672373745610805429;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002857702813367403102;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.7988148833272123994;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6988345000000001361) ) ) {
                                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5835315000000000918) ) ) {
                                  sum += (double)-0.003700027217691367366;
                                } else {
                                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5891405000000000669) ) ) {
                                    sum += (double)-0.0009917672946412341064;
                                  } else {
                                    sum += (double)-0.002715056919538962749;
                                  }
                                }
                              } else {
                                sum += (double)-0.003293362900052250811;
                              }
                            } else {
                              sum += (double)-0.8696885850694444642;
                            }
                          } else {
                            sum += (double)-0.002938762133799517617;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.5573575553297996921;
                    }
                  }
                }
              } else {
                sum += (double)-0.8837721767485705593;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                sum += (double)-0.002883536928962442472;
              } else {
                sum += (double)0.003178276798941872573;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)93.33606770833334565;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.837046479413853461;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.002609345994991055153;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.5743195564516129226;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002577635654586189502;
                      } else {
                        sum += (double)-0.7000500136449523403;
                      }
                    } else {
                      sum += (double)-0.002403452668665628008;
                    }
                  } else {
                    sum += (double)-0.7425001017252603752;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.002558762330693931455;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.5429640454646298409;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.002623090474353223598;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.5207736401459143183;
                        } else {
                          sum += (double)-0.002609033229530897946;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.7230275961602556922;
              }
            }
          }
        } else {
          sum += (double)-0.7534241714046500116;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002620300421071775424;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.8475528293185764506;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002649687224572321205;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.7288754739396559046;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002714817693125366142;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.7588737553001468905;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.002775892627821638717;
                            } else {
                              sum += (double)-0.8262059850377720949;
                            }
                          } else {
                            sum += (double)-0.002791824000640861538;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.5294896396994590582;
                    }
                  }
                }
              } else {
                sum += (double)-0.8395843987209188342;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9749085000000000667) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.105000000000000426) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719445000000001) ) ) {
                    sum += (double)-0.002779889378451148689;
                  } else {
                    sum += (double)-0.004206928915820007907;
                  }
                } else {
                  sum += (double)-0.016169998546441397;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.665000000000000258) ) ) {
                  sum += (double)-0.00252412243359600259;
                } else {
                  sum += (double)0.008054720384902075078;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)88.66927083333334281;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.695195260277406746;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
            sum += (double)-0.002478878597025030439;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
              sum += (double)-0.5456036311323925192;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002448754063934591597;
                      } else {
                        sum += (double)-0.6650469481198113542;
                      }
                    } else {
                      sum += (double)-0.002283280034822106948;
                    }
                  } else {
                    sum += (double)-0.705375510321723187;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.002430823967437819449;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.5158152117932303105;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.002491935950087556181;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.4947342666079994067;
                        } else {
                          sum += (double)-0.00247858174157608406;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.6868762355940095654;
              }
            }
          }
        } else {
          sum += (double)-0.7157522341625839335;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002489285342676191611;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.8051751999627976275;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002517202833380306672;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.6924306317105319852;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1009690000000000171) ) ) {
                          sum += (double)-0.002059624559315745979;
                        } else {
                          sum += (double)-0.00267842257704254804;
                        }
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.7209298766915954726;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.002637098004271581399;
                            } else {
                              sum += (double)-0.7848940554323855512;
                            }
                          } else {
                            sum += (double)-0.002652232807534248699;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.5030151800811291096;
                    }
                  }
                }
              } else {
                sum += (double)-0.797603763616423489;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
                sum += (double)-0.002609288460442105856;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9697240000000001414) ) ) {
                  sum += (double)-0.01340805590152740513;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9938050000000001605) ) ) {
                    sum += (double)0.02494558560323309124;
                  } else {
                    sum += (double)-0.007760404516011476864;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)84.23580729166667425;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.560435673514789734;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.002311064315474927258;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.5436206209248509724;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002326316431997966627;
                      } else {
                        sum += (double)-0.6317941383610393702;
                      }
                    } else {
                      sum += (double)-0.002169115927696783647;
                    }
                  } else {
                    sum += (double)-0.6701066589355468839;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.00230928302351646143;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.4900248250903271319;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.002367339135093118972;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.4699977206645038486;
                        } else {
                          sum += (double)-0.002354652546377154505;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.550000000000000266) ) ) {
              sum += (double)1.614815461039543099;
            } else {
              sum += (double)-0.118641828071503419;
            }
          }
        } else {
          sum += (double)-0.6799653694454560471;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002364821134892366832;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.7649164884052579438;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002391342617758542965;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.657810636426581774;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002450122992695718486;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.6848832350510818401;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.002505243064440247289;
                            } else {
                              sum += (double)-0.7456505211265953559;
                            }
                          } else {
                            sum += (double)-0.00251962112778106144;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.4778644029796124126;
                    }
                  }
                }
              } else {
                sum += (double)-0.7577235080466285799;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9749085000000000667) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.105000000000000426) ) ) {
                  sum += (double)-0.002617548289992537285;
                } else {
                  sum += (double)-0.015056369063400089;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.665000000000000258) ) ) {
                  sum += (double)-0.002267674635674213259;
                } else {
                  sum += (double)0.007437524944543839021;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)80.02395833333333997;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.432413323550301154;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.002223033149827990853;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.5164398686639194436;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002490388476713137345;
                      } else {
                        sum += (double)-0.6002062422291079002;
                      }
                    } else {
                      sum += (double)-0.002060660027671243951;
                    }
                  } else {
                    sum += (double)-0.636601164076063375;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.002250803938271958397;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.465524360084146771;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001904333267556993729;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.003125394777291351164;
                            } else {
                              sum += (double)-0.005561006986624860218;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                              sum += (double)-0.0007621149545025932177;
                            } else {
                              sum += (double)-0.003735277256486136104;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.4276410396834065542;
                        } else {
                          sum += (double)-0.00239545822830443747;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.9406852721682060769;
          }
        } else {
          sum += (double)-0.6459657787603174661;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.00224658003455224407;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.7266702222067212835;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002271775531663879338;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.6249194619434127462;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002327616816950081168;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.6506401996666889564;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.00237998092653016061;
                            } else {
                              sum += (double)-0.7083680665528810927;
                            }
                          } else {
                            sum += (double)-0.002393640101130257644;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.4539711597561836287;
                    }
                  }
                }
              } else {
                sum += (double)-0.7198374462428529519;
              }
            } else {
              sum += (double)-0.00234138973768772355;
            }
          }
        }
      }
    }
  } else {
    sum += (double)76.02278645833334281;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.310796107327874438;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9815244999999999109) ) ) {
                sum += (double)-0.001929256015937234024;
              } else {
                sum += (double)-0.002692659520019559122;
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.4906182700190051538;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.00208548121735628025;
                      } else {
                        sum += (double)-0.5701950876336349117;
                      }
                    } else {
                      sum += (double)-0.001957627103105029701;
                    }
                  } else {
                    sum += (double)-0.6047718556722005978;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.002081278513474481891;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.4422475137768604458;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.002111003994157197288;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.425116205305253958;
                        } else {
                          sum += (double)-0.002117147002483742158;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.550000000000000266) ) ) {
              sum += (double)1.530585942417383327;
            } else {
              sum += (double)-0.1597440001510438412;
            }
          }
        } else {
          sum += (double)-0.6136682542703919552;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002134250998188182147;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.6903375341021825706;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002158186753885083572;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.5936725053630892424;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002211235968484881031;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.6181061399628294817;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.002260981869277226605;
                            } else {
                              sum += (double)-0.6729489804746152659;
                            }
                          } else {
                            sum += (double)-0.002273958085755646476;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.4312726595252752704;
                    }
                  }
                }
              } else {
                sum += (double)-0.6838467089535686938;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8962870000000001669) ) ) {
                sum += (double)-0.001425462395156470432;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9083395000000000774) ) ) {
                  sum += (double)-0.002992438132441327479;
                } else {
                  sum += (double)-0.002163369362087518444;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)72.22174479166666572;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.195255642651236627;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.002039930183584229978;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.4660873084232725616;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002361119016037359006;
                      } else {
                        sum += (double)-0.5416855508522282481;
                      }
                    } else {
                      sum += (double)-0.001859745834210523897;
                    }
                  } else {
                    sum += (double)-0.5745328733656142051;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.002057021003196536375;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.4201349285504880626;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.00175734513109190426;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.003218365612405317804;
                            } else {
                              sum += (double)-0.005841486640209961334;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                              sum += (double)-0.000618459265094434274;
                            } else {
                              sum += (double)-0.003657026870915010969;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.3851865625022945494;
                        } else {
                          sum += (double)-0.002233478467311227587;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.8942889293898708125;
          }
        } else {
          sum += (double)-0.5829853812179995876;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.002027538556528860926;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.6558210778614831371;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.002050277379328147541;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.5639895704926037867;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.002100674180329026308;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.5872011190126424918;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.002147932793353290581;
                            } else {
                              sum += (double)-0.6393019850905593549;
                            }
                          } else {
                            sum += (double)-0.002160260161114433211;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.4097090202569961814;
                    }
                  }
                }
              } else {
                sum += (double)-0.6496539479926557448;
              }
            } else {
              sum += (double)-0.002113104220098609674;
            }
          }
        }
      }
    }
  } else {
    sum += (double)68.61054687499999716;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)2.085490017651236538;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001937933788174077193;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.4427822737858213564;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002243063103456002013;
                      } else {
                        sum += (double)-0.5146005501424459894;
                      }
                    } else {
                      sum += (double)-0.001766758500324220639;
                    }
                  } else {
                    sum += (double)-0.5458072619967990757;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001954169850907398753;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.3991287695708671812;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001669477907973423384;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.003057447289703068855;
                            } else {
                              sum += (double)-0.006958838105411007356;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                              sum += (double)-0.001479318998809876036;
                            } else {
                              sum += (double)-0.003474175535641901846;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.3659271699145324463;
                        } else {
                          sum += (double)-0.002121804513198097871;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.8495744889197143213;
          }
        } else {
          sum += (double)-0.553837201824295966;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001926161610881736057;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.6230298723493303825;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.001947763527904081268;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.5357900067105320074;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001995640454326811329;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.5578418612140535471;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.00204053615358506038;
                            } else {
                              sum += (double)-0.6073361508481137649;
                            }
                          } else {
                            sum += (double)-0.002052247249026347385;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.3892235200107097559;
                    }
                  }
                }
              } else {
                sum += (double)-0.6171715191862184868;
              }
            } else {
              sum += (double)-0.002007449019088974017;
            }
          }
        }
      }
    }
  } else {
    sum += (double)65.18007812500000853;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.981217295600768757;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001841036978416275621;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.4206438656510977925;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002130909890613772676;
                      } else {
                        sum += (double)-0.4888695279458411536;
                      }
                    } else {
                      sum += (double)-0.001678420656764219743;
                    }
                  } else {
                    sum += (double)-0.5185167694091797896;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001856461401913423988;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.3791718395921812035;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001586004084400963665;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002904575142181581998;
                            } else {
                              sum += (double)-0.005306407503874090853;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                              sum += (double)-0.000513570329734028253;
                            } else {
                              sum += (double)-0.003300466898870368492;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.3476302383537579477;
                        } else {
                          sum += (double)-0.002015714416206130805;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.8070957463720571656;
          }
        } else {
          sum += (double)-0.526143909174170199;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001829853538636769293;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.5918787396143353474;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.001850375316986054182;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.5090007719446401069;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001895858442490499802;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.5299507684517450468;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001938509363765055773;
                            } else {
                              sum += (double)-0.5769705007742117475;
                            }
                          } else {
                            sum += (double)-0.001949634860946404665;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.3697623473405838301;
                    }
                  }
                }
              } else {
                sum += (double)-0.5863121441862184646;
              }
            } else {
              sum += (double)-0.001907076560180997462;
            }
          }
        }
      }
    }
  } else {
    sum += (double)61.92109375000000426;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.882155539772727426;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001748985191290838848;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3996117805612498519;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.002024364492964822026;
                      } else {
                        sum += (double)-0.4644270359125352576;
                      }
                    } else {
                      sum += (double)-0.001594499542627583148;
                    }
                  } else {
                    sum += (double)-0.4925898785061306739;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001763638355195114088;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.3602132182092260826;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001506703831908995763;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002759346312463835382;
                            } else {
                              sum += (double)-0.006345575670136160105;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8412974999999999204) ) ) {
                              sum += (double)-0.001300272980015138372;
                            } else {
                              sum += (double)-0.003135443414306507415;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.3302493159932301525;
                        } else {
                          sum += (double)-0.001914928546422888476;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.7667410166367241153;
          }
        } else {
          sum += (double)-0.4998370326844986389;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001738360858562736089;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.5622840227399553692;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  sum += (double)-0.001757856641095895903;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                    sum += (double)-0.4835508002609503198;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001801065563275975256;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.5034521727820068238;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001841583871653279221;
                            } else {
                              sum += (double)-0.5481220600483295291;
                            }
                          } else {
                            sum += (double)-0.001852153092500174016;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.3512742564082145802;
                    }
                  }
                }
              } else {
                sum += (double)-0.5569970164013210434;
              }
            } else {
              sum += (double)-0.001811722756423883368;
            }
          }
        }
      }
    }
  } else {
    sum += (double)58.82500000000000284;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.788049283767129127;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001601747038223140301;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3796312858318460215;
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                          sum += (double)-0.001543234107756723348;
                        } else {
                          sum += (double)-0.4412056676725994997;
                        }
                      } else {
                        sum += (double)-0.001514774615679540535;
                      }
                    } else {
                      sum += (double)-0.4679607221815321738;
                    }
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                      sum += (double)-0.001595650050741400554;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                        sum += (double)-0.3422025916542533186;
                      } else {
                        sum += (double)-0.001499621066175108389;
                      }
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                    sum += (double)-0.3324109093617584887;
                  } else {
                    sum += (double)-0.001596993488025041062;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.550000000000000266) ) ) {
              sum += (double)1.441615604162216346;
            } else {
              sum += (double)-0.3176418122791109244;
            }
          }
        } else {
          sum += (double)-0.4748446405270678738;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001651442722553506538;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.5341696699838789364;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.001665805494485453472;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.4593731364265817851;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.00171101222907324717;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.4782791268112313587;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.001655685343579706191;
                              } else {
                                sum += (double)-0.5207159368841497438;
                              }
                            } else {
                              sum += (double)-0.001662677166349204802;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)0.6118374065496028358;
                  }
                } else {
                  sum += (double)-0.3508955648346316902;
                }
              } else {
                sum += (double)-0.5291470404303035835;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9749085000000000667) ) ) {
                sum += (double)-0.001892703665670467886;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.665000000000000258) ) ) {
                  sum += (double)-0.001537085289832712184;
                } else {
                  sum += (double)0.007682854897881809947;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)55.88372395833334139;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.698644464666193343;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001611832171207979976;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3606490102307550183;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001939696197144009969;
                      } else {
                        sum += (double)-0.4191449770055020174;
                      }
                    } else {
                      sum += (double)-0.001439035943662373036;
                    }
                  } else {
                    sum += (double)-0.4445627848307291963;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001617163093732875215;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.3250927536289300868;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001407023276937635452;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002880452440499707816;
                            } else {
                              sum += (double)-0.006966739516768060206;
                            }
                          } else {
                            sum += (double)-0.00183959258384094014;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2972829804384619079;
                        } else {
                          sum += (double)-0.001799266605152194734;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.7366370994111766102;
          }
        } else {
          sum += (double)-0.4511028268242960326;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.0015688705924562351;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.5074611506386406123;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001578238343522674536;
                    } else {
                      sum += (double)-0.0207135165279561835;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.4364053903381681088;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001625461670826537685;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.4543657960375490079;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001687208891913732694;
                            } else {
                              sum += (double)-0.4946794572893205566;
                            }
                          } else {
                            sum += (double)-0.00169337596952896254;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)0.3076361310222874845;
                }
              } else {
                sum += (double)-0.5026894939434641829;
              }
            } else {
              sum += (double)-0.001635079772943718148;
            }
          }
        }
      }
    }
  } else {
    sum += (double)53.08958333333333712;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.613711629449365192;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001531240524639163178;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3426170727302288443;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.0018427114154804837;
                      } else {
                        sum += (double)-0.3981882119238526196;
                      }
                    } else {
                      sum += (double)-0.001367084006197065828;
                    }
                  } else {
                    sum += (double)-0.4223347642686632319;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001536304954641308333;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.3088372592268319172;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001336672075223504412;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002736429682139445482;
                            } else {
                              sum += (double)-0.006618402739254277377;
                            }
                          } else {
                            sum += (double)-0.001747612873773749485;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2824186712279355693;
                        } else {
                          sum += (double)-0.001709303210034619812;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.699805196471836255;
          }
        } else {
          sum += (double)-0.4285485219147245894;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001490427110137306291;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.4820887780567956193;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.001502471988718412713;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.4145836501825050924;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.001544188570878334129;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.4316471632389601298;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.001488540632689887028;
                              } else {
                                sum += (double)-0.469945335960960997;
                              }
                            } else {
                              sum += (double)-0.001494874462984987357;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)0.5801163417100906328;
                  }
                } else {
                  sum += (double)-0.3487326015585235361;
                }
              } else {
                sum += (double)-0.4775556401875493129;
              }
            } else {
              sum += (double)-0.001553325783469200905;
            }
          }
        }
      }
    }
  } else {
    sum += (double)50.43515625000000568;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.533025502903576198;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001454678355915504581;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3254859085740714475;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001750575684301265049;
                      } else {
                        sum += (double)-0.378278513361039348;
                      }
                    } else {
                      sum += (double)-0.001298729986290035956;
                    }
                  } else {
                    sum += (double)-0.4012171045939127989;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001459489647380035875;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2933957856276939724;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001269838367899259147;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.00259960829970185426;
                            } else {
                              sum += (double)-0.006287482466935861124;
                            }
                          } else {
                            sum += (double)-0.001660232318792401315;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2682982953867518172;
                        } else {
                          sum += (double)-0.00162383798955385893;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.6648149656212849479;
          }
        } else {
          sum += (double)-0.4071204449497373701;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001415905794733562451;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.4579841056702629309;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001424202815431988706;
                    } else {
                      sum += (double)-0.02885574411854825716;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.3938546561152557746;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001466979128528342899;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.4100654102118945765;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001547844937647332433;
                            } else {
                              sum += (double)-0.446448505390155792;
                            }
                          } else {
                            sum += (double)-0.001550046040652532792;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)0.3056524765880211936;
                }
              } else {
                sum += (double)-0.453677320029081288;
              }
            } else {
              sum += (double)-0.001475659505965650278;
            }
          }
        }
      }
    }
  } else {
    sum += (double)47.91328125000000426;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.456374289772727426;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001381944521320493686;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.3092113626414332295;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001663046966899525128;
                      } else {
                        sum += (double)-0.3593656535136670049;
                      }
                    } else {
                      sum += (double)-0.001233793314891894633;
                    }
                  } else {
                    sum += (double)-0.3811567603217231315;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001386515129171201136;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2787256329828537438;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001206346607260536845;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002469627712680786194;
                            } else {
                              sum += (double)-0.005973108283772520649;
                            }
                          } else {
                            sum += (double)-0.001577220727757709835;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2548830218781205637;
                        } else {
                          sum += (double)-0.001542646251464157604;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.6315742430479630576;
          }
        } else {
          sum += (double)-0.3867638194628355008;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001345110427773520871;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.4350860111297122912;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.001354516659585603636;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.3741636265822447238;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.001393630143167857646;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.3895616058610443799;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.001336721351058304955;
                              } else {
                                sum += (double)-0.4241254193646772364;
                              }
                            } else {
                              sum += (double)-0.00134262846082301799;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)0.5501298213005066939;
                  }
                } else {
                  sum += (double)-0.3465785912282410286;
                }
              } else {
                sum += (double)-0.4309936908517350007;
              }
            } else {
              sum += (double)-0.001401876524902976803;
            }
          }
        }
      }
    }
  } else {
    sum += (double)45.517578125;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.383555007363385769;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001312847249968010282;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2937508829708757041;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001579894637568043589;
                      } else {
                        sum += (double)-0.3413969035136670271;
                      }
                    } else {
                      sum += (double)-0.001172103808403065703;
                    }
                  } else {
                    sum += (double)-0.3620983039008247029;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001317189325993972778;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2647903163824797401;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001146029239160972725;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8584614999999998775) ) ) {
                              sum += (double)-0.002346146486147686686;
                            } else {
                              sum += (double)-0.005674452739022149;
                            }
                          } else {
                            sum += (double)-0.001498359626749666811;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2421386059065510354;
                        } else {
                          sum += (double)-0.001465513916110675703;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.5999955125477003381;
          }
        } else {
          sum += (double)-0.3674258086640956322;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001277854991019756635;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.4133311728825645459;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001285266807900196148;
                    } else {
                      sum += (double)-0.03611884539184922333;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.3554547127478761559;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001323948676720075081;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.3700836094695958423;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001422033621969760481;
                            } else {
                              sum += (double)-0.4029190934098160759;
                            }
                          } else {
                            sum += (double)-0.001420661573768623905;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)0.303800066657688328;
                }
              } else {
                sum += (double)-0.4094439100391857322;
              }
            } else {
              sum += (double)-0.00133178269010253013;
            }
          }
        }
      }
    }
  } else {
    sum += (double)43.24179687500000568;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.314378152939087663;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001157032520654361534;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2790631984842235069;
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                          sum += (double)-0.00102727620732838529;
                        } else {
                          sum += (double)-0.3243266017215891139;
                        }
                      } else {
                        sum += (double)-0.001113498473854728551;
                      }
                    } else {
                      sum += (double)-0.3439941279093424731;
                    }
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                      sum += (double)-0.001150034505198106304;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                        sum += (double)-0.2515509429374524486;
                      } else {
                        sum += (double)-0.0008942083020678113711;
                      }
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                    sum += (double)-0.2485392367547963888;
                  } else {
                    sum += (double)-0.001110115390292625102;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.550000000000000266) ) ) {
              sum += (double)1.356884681582450902;
            } else {
              sum += (double)-0.4684010732741583083;
            }
          }
        } else {
          sum += (double)-0.3490542611159847541;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
          sum += (double)-0.001213962159734933901;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
            sum += (double)-0.3926645527188740159;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.001220468268122183687;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.3376807416071657686;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.001257751209142956086;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.3515796889606704334;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.001198783606353813654;
                              } else {
                                sum += (double)-0.3827735877967811673;
                              }
                            } else {
                              sum += (double)-0.001204463947926286962;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)0.5217755430936813488;
                  }
                } else {
                  sum += (double)-0.3444396628687779183;
                }
              } else {
                sum += (double)-0.3889719869812204855;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9994580000000000686) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
                  sum += (double)-0.001251408352974318471;
                } else {
                  sum += (double)0.00766788153421311177;
                }
              } else {
                sum += (double)-0.00282459715325385349;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)41.07968750000000568;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.248662579378342352;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001217943687553991365;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2651103249911604398;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001537712217828670139;
                      } else {
                        sum += (double)-0.3081100655080083461;
                      }
                    } else {
                      sum += (double)-0.001057823614778659023;
                    }
                  } else {
                    sum += (double)-0.3267944547865125893;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001214049079307333301;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2389732809627757304;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001091658564251765879;
                        } else {
                          sum += (double)-0.002649221030129166304;
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2177555055546581686;
                        } else {
                          sum += (double)-0.001393127644069467978;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.3754585417404391334;
          }
        } else {
          sum += (double)1.192324541012446115;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8100000000000001643) ) ) {
              sum += (double)-0.001160405021817523035;
            } else {
              sum += (double)-0.02333000095561146847;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.3730313933841766239;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001159979959635508212;
                    } else {
                      sum += (double)-0.04257227145135403235;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.3207971291463883601;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001194863669902398312;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.3340000424289975012;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001308458229186022781;
                            } else {
                              sum += (double)-0.3636344840934684908;
                            }
                          } else {
                            sum += (double)-0.001303866604154829993;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.3695228745132590475;
                }
              } else {
                sum += (double)-0.00120821000747749663;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.420000000000003482) ) ) {
            sum += (double)0.5434986509027934787;
          } else {
            sum += (double)-0.1375524534710816094;
          }
        }
      }
    }
  } else {
    sum += (double)39.02578125000000142;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.186228999989555666;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001157046530016681484;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2518550395965576394;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001460826493461023917;
                      } else {
                        sum += (double)-0.2927042413773692231;
                      }
                    } else {
                      sum += (double)-0.001004932312810006894;
                    }
                  } else {
                    sum += (double)-0.310455156962076817;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001153346617384955197;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2270245596554893719;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.001037075801899558624;
                        } else {
                          sum += (double)-0.002516759958316485551;
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.2068675034028246706;
                        } else {
                          sum += (double)-0.001323471215098749902;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.3566857183958923594;
          }
        } else {
          sum += (double)1.132708329955736781;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8100000000000001643) ) ) {
              sum += (double)-0.001102384736279679242;
            } else {
              sum += (double)-0.02216350044123828467;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.3543787396143353585;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001101981014009579011;
                    } else {
                      sum += (double)-0.04044365754181689088;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.3047571567889771349;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001135120523391684472;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.3173005454560630656;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.00124303531037972168;
                            } else {
                              sum += (double)-0.3454531008058840391;
                            }
                          } else {
                            sum += (double)-0.001238673277240157295;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.3510463774768335932;
                }
              } else {
                sum += (double)-0.00114779950483414315;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.420000000000003482) ) ) {
            sum += (double)0.5163237409666180389;
          } else {
            sum += (double)-0.1306748305048261449;
          }
        }
      }
    }
  } else {
    sum += (double)37.07447916666666998;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.126914382363385814;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.00109919407801669939;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2392620810146989518;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001387785307385704884;
                      } else {
                        sum += (double)-0.2780699918742168264;
                      }
                    } else {
                      sum += (double)-0.0009546857877890471428;
                    }
                  } else {
                    sum += (double)-0.2949321068657769218;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001095679338201614294;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2156728315063229096;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.0009852219521999359703;
                        } else {
                          sum += (double)-0.002390921969630411831;
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1965246845905045947;
                        } else {
                          sum += (double)-0.001257297552292826158;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.3388508653505666324;
          }
        } else {
          sum += (double)1.076072839895884092;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8100000000000001643) ) ) {
              sum += (double)-0.001047265521371875275;
            } else {
              sum += (double)-0.02105532586574554443;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.3366606794084821552;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.001046881939736053887;
                    } else {
                      sum += (double)-0.03842147514224052846;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.2895197383693007276;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.001078364464158891936;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.3014351434517450468;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001180883561738997091;
                            } else {
                              sum += (double)-0.3281804081913945459;
                            }
                          } else {
                            sum += (double)-0.001176739606092784031;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.3334941105887717083;
                }
              } else {
                sum += (double)-0.001090409535511820951;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.420000000000003482) ) ) {
            sum += (double)0.4905075450738271003;
          } else {
            sum += (double)-0.1241410894053322916;
          }
        }
      }
    }
  } else {
    sum += (double)35.220703125;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.070573808802640414;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.001044234508851118364;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2272989552596519636;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001318395976460986488;
                      } else {
                        sum += (double)-0.2641657855576441394;
                      }
                    } else {
                      sum += (double)-0.00090695141054522642;
                    }
                  } else {
                    sum += (double)-0.2801853052775065134;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.001040895377131020438;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.2048891326718591532;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.0009359608448126860653;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            sum += (double)-0.003837826543459243664;
                          } else {
                            sum += (double)-0.001067119160349049196;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1866988992332515862;
                        } else {
                          sum += (double)-0.0011944327238897648;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.3219094425017705596;
          }
        } else {
          sum += (double)1.022269215186436986;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.001012884417390591844;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.3198260594928075684;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0009870195328071154888;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.2750437877217277172;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.001024446251436609851;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.2863635723407452205;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0009522255757647790728;
                              } else {
                                sum += (double)-0.3117711155980198989;
                              }
                            } else {
                              sum += (double)-0.0009582767868502129003;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.3168189208214215458;
                  }
                } else {
                  sum += (double)-0.001029941632607853834;
                }
              }
            }
          } else {
            sum += (double)0.2809108279419668119;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
            sum += (double)-0.2627876969783202177;
          } else {
            sum += (double)-0.04040529580786824532;
          }
        }
      }
    }
  } else {
    sum += (double)33.45976562500000284;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)1.017040069090491272;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0009920227062806747428;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2159342880906729989;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001252476207960348791;
                      } else {
                        sum += (double)-0.2509575941807644095;
                      }
                    } else {
                      sum += (double)-0.000861604003750863958;
                    }
                  } else {
                    sum += (double)-0.266176062689887194;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.000988850659680258438;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1946445612104621137;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.000889162769704534249;
                        } else {
                          sum += (double)-0.002157807189167795011;
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1773634989458815481;
                        } else {
                          sum += (double)-0.001134711135321132824;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.3058135899876062158;
          }
        } else {
          sum += (double)0.9711557646592459125;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8100000000000001643) ) ) {
              sum += (double)-0.000944258035705279131;
            } else {
              sum += (double)-0.02347596090286970319;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.3038360111297123134;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                      sum += (double)-0.0009451869180228449031;
                    } else {
                      sum += (double)-0.04093578881160779559;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.2612912621003031233;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.0009732239391993532203;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.2720443421279603036;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.001083641313006047067;
                            } else {
                              sum += (double)-0.2961826267185154182;
                            }
                          } else {
                            sum += (double)-0.00107778297659621991;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.3009794505988762081;
                }
              } else {
                sum += (double)-0.0009881710824818487528;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7639295000000000391) ) ) {
            sum += (double)0.4710980278524485865;
          } else {
            sum += (double)-0.1341609729384934668;
          }
        }
      }
    }
  } else {
    sum += (double)31.78671875000000213;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.9661923984792780695;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0009424215687471523828;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.2051376277002794901;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001189852429481295937;
                      } else {
                        sum += (double)-0.2384104104866658913;
                      }
                    } else {
                      sum += (double)-0.0008185238446069946234;
                    }
                  } else {
                    sum += (double)-0.2528674231635199554;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0009394080516787390624;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1849124374544403038;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8726894999999998959) ) ) {
                          sum += (double)0.0001988334325598735657;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                            sum += (double)-0.002147530505795087596;
                          } else {
                            sum += (double)-0.0006601566189334760444;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1684956328313153562;
                        } else {
                          sum += (double)-0.001077975499508686047;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.2905229174043909568;
          }
        } else {
          sum += (double)0.9225980182488759951;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0009139147517899784065;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.2886442251054067709;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0008880451644595430561;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.2482260948973275261;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0009245627095812078942;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.2584435704766515629;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0008504322099699530239;
                              } else {
                                sum += (double)-0.2813738665423236029;
                              }
                            } else {
                              sum += (double)-0.0008564737845676439901;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.2859291245132590809;
                  }
                } else {
                  sum += (double)-0.0009290360079720748777;
                }
              }
            }
          } else {
            sum += (double)0.2668868271916202128;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
            sum += (double)-0.2692558704510978895;
          } else {
            sum += (double)-0.03167698238044976827;
          }
        }
      }
    }
  } else {
    sum += (double)30.197265625;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.9178817014643215755;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0008953005709146198568;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.1948808867355872887;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001130359696055000581;
                      } else {
                        sum += (double)-0.2264892272184367283;
                      }
                    } else {
                      sum += (double)-0.0007775976312729778904;
                    }
                  } else {
                    sum += (double)-0.2402233039008246918;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0008924377097028788697;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1756676664217007022;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.0007667194368285045912;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            sum += (double)-0.003430668323957905205;
                          } else {
                            sum += (double)-0.0008568304947054968847;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1600701769491783555;
                        } else {
                          sum += (double)-0.001024076723311084054;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.2759967577018413443;
          }
        } else {
          sum += (double)0.8764680445194245051;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0008682190403532313253;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.2742123945932539719;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0008436428878787863598;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.2358158757777813475;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0008783345968076576929;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.2455209933115206633;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0008079106185462167503;
                              } else {
                                sum += (double)-0.2673052813555743534;
                              }
                            } else {
                              sum += (double)-0.0008136500939318679982;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.2716339015058162332;
                  }
                } else {
                  sum += (double)-0.0008825841948980379806;
                }
              }
            }
          } else {
            sum += (double)-0.1771917207373513437;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
            sum += (double)-0.2012670537900357326;
          } else {
            sum += (double)0.3890208409833056935;
          }
        }
      }
    }
  } else {
    sum += (double)28.6875;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.8719811750605782619;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0008505354192696120037;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.1851365780008250583;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001073841876168916791;
                      } else {
                        sum += (double)-0.215165668382381714;
                      }
                    } else {
                      sum += (double)-0.0007387176690933210674;
                    }
                  } else {
                    sum += (double)-0.2282139205932617321;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0008478158146937274375;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1668835374936612492;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8615849999999999342) ) ) {
                          sum += (double)-0.0007283834510466509655;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8485944999999999183) ) ) {
                            sum += (double)-0.003259134935782418904;
                          } else {
                            sum += (double)-0.0008139888960413815822;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1520672991759794979;
                        } else {
                          sum += (double)-0.0009728729748089744861;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.262197071972379625;
          }
        } else {
          sum += (double)0.8326446652412414773;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.170000000000000817) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0008248080507134178483;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.2605009726872519749;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0008014607650431991885;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.2240240837055477441;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.000834417881584552921;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.2332446584674368051;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0007675151014098808991;
                              } else {
                                sum += (double)-0.2539403600377721504;
                              }
                            } else {
                              sum += (double)-0.0007729676007093213164;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.2580517693648955446;
                  }
                } else {
                  sum += (double)-0.0008384549748334800849;
                }
              }
            }
          } else {
            sum += (double)0.2581490464282758523;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
            sum += (double)-0.2495794291081635807;
          } else {
            sum += (double)-0.04954417336732149652;
          }
        }
      }
    }
  } else {
    sum += (double)27.25312500000000071;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.8283863088026404142;
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0008080086388608866436;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.1758795787548196876;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.00102014964107762689;
                      } else {
                        sum += (double)-0.2044062487762374758;
                      }
                    } else {
                      sum += (double)-0.0007017818214478306095;
                    }
                  } else {
                    sum += (double)-0.216801020304361991;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0008054249842294523929;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1585395549905711521;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8726894999999998959) ) ) {
                          sum += (double)0.0002636470678014581786;
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8413059999999998873) ) ) {
                            sum += (double)-0.001865922206484559812;
                          } else {
                            sum += (double)-0.0005436078060316432191;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1444641859011542573;
                        } else {
                          sum += (double)-0.0009242292482752440495;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.2490862362783285988;
          }
        } else {
          sum += (double)0.7910124480724335383;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.100000000000000533) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0007835677272037477274;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.2474752565414186645;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0007613877313863567312;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.2128237823319565347;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0007926969807392023754;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.2215822051393340486;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0007291393345690806238;
                              } else {
                                sum += (double)-0.2412429397170607892;
                              }
                            } else {
                              sum += (double)-0.000734319223770533774;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.2451489758416305342;
                  }
                } else {
                  sum += (double)-0.0007965322134641345756;
                }
              }
            }
          } else {
            sum += (double)-0.1812395815496091744;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7639295000000000391) ) ) {
            sum += (double)0.4774617949331348976;
          } else {
            sum += (double)-0.1449025143075872435;
          }
        }
      }
    }
  } else {
    sum += (double)25.89049479166666856;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.7869679823278743491;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                  sum += (double)-0.0006488455246063773267;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                    sum += (double)-0.1670863694158093715;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.0004073424473094847446;
                            } else {
                              sum += (double)-0.1941860724810072214;
                            }
                          } else {
                            sum += (double)-0.0006666927449704984632;
                          }
                        } else {
                          sum += (double)-0.2059619903564453292;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.000643637353548264738;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.1506120538614826587;
                          } else {
                            sum += (double)-0.0001243754995530531944;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.1555963778450888679;
                      } else {
                        sum += (double)-0.0005394997617116791162;
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.7063176746721621102;
              }
            } else {
              sum += (double)-0.2366318829674221025;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.975000000000000533) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                sum += (double)-0.0007443892732789890963;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                  sum += (double)-0.2351027425130208237;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                        sum += (double)-0.0007233183130667716464;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                          sum += (double)-0.2021825613219881412;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                            sum += (double)-0.00075306211531769255;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                              sum += (double)-0.2105032026937544709;
                            } else {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                  sum += (double)-0.0006926823699325232193;
                                } else {
                                  sum += (double)-0.2291807249143675007;
                                }
                              } else {
                                sum += (double)-0.0006976032508555726243;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)-0.2328920574970426149;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                      sum += (double)-0.0007655167994089111857;
                    } else {
                      sum += (double)0.01156695381822911255;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1690237604436420349;
            }
          }
        } else {
          sum += (double)0.8827200487256050554;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
          sum += (double)-0.4169255796819925641;
        } else {
          sum += (double)-0.03982184010557830722;
        }
      }
    }
  } else {
    sum += (double)24.59596354166666643;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.7476175073633857249;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                  sum += (double)-0.0006164032579874330255;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                    sum += (double)-0.1587309048093598629;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.0003869753699115101287;
                            } else {
                              sum += (double)-0.1844767635029957997;
                            }
                          } else {
                            sum += (double)-0.0006333581105265916663;
                          }
                        } else {
                          sum += (double)-0.1956631427341037344;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.0006114555035637609;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.1430820612104621026;
                          } else {
                            sum += (double)-0.0001181566760119324251;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.1478166224592823152;
                      } else {
                        sum += (double)-0.0005125247415833342245;
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.6710018051995172428;
              }
            } else {
              sum += (double)-0.2248005378009915178;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.975000000000000533) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                sum += (double)-0.000707169876662601133;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                  sum += (double)-0.2233462475973462258;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                        sum += (double)-0.0006871523735045457701;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                          sum += (double)-0.1920734843269723546;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                            sum += (double)-0.0007154090284767242007;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                              sum += (double)-0.1999791506688479437;
                            } else {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                  sum += (double)-0.0006580482507375607585;
                                } else {
                                  sum += (double)-0.2177217683992586361;
                                }
                              } else {
                                sum += (double)-0.0006627230824448743229;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)-0.2212478397020406495;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                      sum += (double)-0.0007272410137815663814;
                    } else {
                      sum += (double)0.01098860553042455175;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1605725760970797;
            }
          }
        } else {
          sum += (double)0.8385840398569902598;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
          sum += (double)-0.3960793030913919432;
        } else {
          sum += (double)-0.03783074580132961273;
        }
      }
    }
  } else {
    sum += (double)23.36614583333333428;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.7102382721110461761;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                  sum += (double)-0.0005855832189296411062;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                    sum += (double)-0.1507950749890557551;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.0003676265565332108125;
                            } else {
                              sum += (double)-0.1752534259232064739;
                            }
                          } else {
                            sum += (double)-0.0006016901703310790963;
                          }
                        } else {
                          sum += (double)-0.1858807796902126885;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.0005808827855938029135;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.1359282271131782571;
                          } else {
                            sum += (double)-0.0001122488123392146805;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.1404259690681644301;
                      } else {
                        sum += (double)-0.0004868987122440674754;
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.6374517078752871546;
              }
            } else {
              sum += (double)-0.2135606630665722594;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.975000000000000533) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                sum += (double)-0.000671811311476918499;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                  sum += (double)-0.2121805923704117025;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                        sum += (double)-0.0006527947513424044688;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                          sum += (double)-0.1824702278512423392;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                            sum += (double)-0.0006796386037026255289;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                              sum += (double)-0.1899796184311565161;
                            } else {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                  sum += (double)-0.0006251458384399456378;
                                } else {
                                  sum += (double)-0.2068344711899399724;
                                }
                              } else {
                                sum += (double)-0.000629586946765878599;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)-0.2101843800830540399;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                      sum += (double)-0.000690878917943453367;
                    } else {
                      sum += (double)0.01043917568908496463;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1525439483778817384;
            }
          }
        } else {
          sum += (double)0.7966548035542171391;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
          sum += (double)-0.3762753264512866958;
        } else {
          sum += (double)-0.03593921139836311202;
        }
      }
    }
  } else {
    sum += (double)22.19778645833333641;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.674721588297961361;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                  sum += (double)-0.0005563039231153058374;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                    sum += (double)-0.1432551992350611092;
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.00034924525820852415;
                            } else {
                              sum += (double)-0.1664912709018640524;
                            }
                          } else {
                            sum += (double)-0.0005716056482095629434;
                          }
                        } else {
                          sum += (double)-0.1765864266289605133;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.0005518385741525652513;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.129130724429117022;
                          } else {
                            sum += (double)-0.0001066364606939886137;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                        sum += (double)-0.1334046186026880132;
                      } else {
                        sum += (double)-0.0004625536096518423975;
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.6055791148432979609;
              }
            } else {
              sum += (double)-0.2028829342245042633;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.975000000000000533) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                sum += (double)-0.0006382207900170455955;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                  sum += (double)-0.2015713549417162964;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                        sum += (double)-0.0006201549828326156791;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                          sum += (double)-0.1733463099745453651;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                            sum += (double)-0.0006456566305401556646;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                              sum += (double)-0.1804798528339788266;
                            } else {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                  sum += (double)-0.0005938885336370475177;
                                } else {
                                  sum += (double)-0.1964941442907751634;
                                }
                              } else {
                                sum += (double)-0.0005981076198216526193;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)-0.1996767639737776212;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.29000000000000048) ) ) {
                      sum += (double)-0.0006563349599826853124;
                    } else {
                      sum += (double)0.009917216646400365057;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1449167492134230684;
            }
          }
        } else {
          sum += (double)0.7568220357100169382;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
          sum += (double)-0.3574615683872253147;
        } else {
          sum += (double)-0.03414225056767463545;
        }
      }
    }
  } else {
    sum += (double)21.087890625;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.6409889588381517678;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.000702467489111841762;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.1360921645986622741;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001063833423926458747;
                      } else {
                        sum += (double)-0.1581663815299968745;
                      }
                    } else {
                      sum += (double)-0.0005430253686470936855;
                    }
                  } else {
                    sum += (double)-0.1677583440144856941;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0006848150469582393483;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1226751486137962754;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.001578813525626621313;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1086787460441876185;
                        } else {
                          sum += (double)-0.0008868456313825920801;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.1927388566749291821;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            sum += (double)-0.0006029427984032068033;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.1914926777188740159;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)-0.0005955962955284276788;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.164677996192473558;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.000609359256790049258;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.1714574395421563369;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.0005641941361255036229;
                            } else {
                              sum += (double)-0.1866691887199699862;
                            }
                          } else {
                            sum += (double)-0.0005847329765256771865;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1896923943648955169;
                }
              } else {
                sum += (double)-0.0006201235896112330861;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
          sum += (double)0.9051897322632034282;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8706950000000001078) ) ) {
                sum += (double)-0.3130549136484042094;
              } else {
                sum += (double)0.00418821159621764888;
              }
            } else {
              sum += (double)0.7189809938271840561;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
              sum += (double)-0.3395884930156171655;
            } else {
              sum += (double)-0.03243513811379671735;
            }
          }
        }
      }
    }
  } else {
    sum += (double)20.03359375000000142;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.6089395941260027367;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0006673439925438479298;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.1292878611334438987;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.001010641775081877643;
                      } else {
                        sum += (double)-0.1502579920871514874;
                      }
                    } else {
                      sum += (double)-0.0005158741874419143537;
                    }
                  } else {
                    sum += (double)-0.1593684938218858649;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0006505744311261863009;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1165408801839027675;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.00149987280685765249;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.1032450252905824234;
                        } else {
                          sum += (double)-0.0008425033098996379411;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.1831010424043909568;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            sum += (double)-0.0005727956812107518362;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.1819171820746527946;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)-0.0005658165282020434289;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.1564444369957095349;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.0005788912781724751778;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.1628834694539040284;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.000535984428844341965;
                            } else {
                              sum += (double)-0.1773352637305274093;
                            }
                          } else {
                            sum += (double)-0.0005554963587705434884;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1802078776555106621;
                }
              } else {
                sum += (double)-0.0005891174466700964223;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
          sum += (double)0.8599302133037286522;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8706950000000001078) ) ) {
                sum += (double)-0.297402163803577424;
              } else {
                sum += (double)0.0039788008506955767;
              }
            } else {
              sum += (double)0.6830318957567215188;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
              sum += (double)-0.3226090697629843129;
            } else {
              sum += (double)-0.03081338044255971936;
            }
          }
        }
      }
    }
  } else {
    sum += (double)19.03190104166666785;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
      sum += (double)0.5784949970755347559;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
              sum += (double)-0.0006339768802649096459;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                sum += (double)-0.122823095321655279;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                        sum += (double)-0.0009601096529513598703;
                      } else {
                        sum += (double)-0.1427438147982260375;
                      }
                    } else {
                      sum += (double)-0.000490080460366406072;
                    }
                  } else {
                    sum += (double)-0.1514007865058051294;
                  }
                } else {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                    sum += (double)-0.0006180455247822210516;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                      sum += (double)-0.1107142450359723668;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        sum += (double)-0.00142487916382693508;
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.09808237319602106097;
                        } else {
                          sum += (double)-0.0008003781884568326316;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.1739462530984419164;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
            sum += (double)-0.0005441559080520855067;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
              sum += (double)-0.1728217715308779656;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)-0.0005375257406489518516;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                      sum += (double)-0.1486228067366803518;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                        sum += (double)-0.000549946725010386629;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                          sum += (double)-0.1547396841891470753;
                        } else {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.0005091851914374240706;
                            } else {
                              sum += (double)-0.168468028575450457;
                            }
                          } else {
                            sum += (double)-0.0005277215172146429521;
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.171197644543572558;
                }
              } else {
                sum += (double)-0.0005596615678204152873;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
          sum += (double)0.8169337305832993223;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.580000000000000959) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8706950000000001078) ) ) {
                sum += (double)-0.282532051116228089;
              } else {
                sum += (double)0.00377986120252773658;
              }
            } else {
              sum += (double)0.6488803774118423462;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.850563000000000069) ) ) {
              sum += (double)-0.3064786159433424695;
            } else {
              sum += (double)-0.02927271053194999834;
            }
          }
        }
      }
    }
  } else {
    sum += (double)18.08020833333333499;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.115000000000001101) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.8652015603998656212;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                sum += (double)-0.000602278058100165015;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                  sum += (double)-0.1166819605334051824;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                          sum += (double)-0.0009121042112638424191;
                        } else {
                          sum += (double)-0.1356075430274906179;
                        }
                      } else {
                        sum += (double)-0.0004655764168006088269;
                      }
                    } else {
                      sum += (double)-0.1438313123914930491;
                    }
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                      sum += (double)-0.0005871433251054248258;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                        sum += (double)-0.1051784925480159782;
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                          sum += (double)-0.001353635182005938483;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                            sum += (double)-0.09317787141728223199;
                          } else {
                            sum += (double)-0.0007603593183792755825;
                          }
                        }
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1652494522397308929;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0005169481011647283257;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.1641808694506448618;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0005106494440594306749;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.1411918014776511465;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0005224493774781626852;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.1470017392411191171;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0004837259366616383956;
                              } else {
                                sum += (double)-0.1600446638044294434;
                              }
                            } else {
                              sum += (double)-0.0005013354604126184005;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.1626373579825512727;
                  }
                } else {
                  sum += (double)-0.0005316784838417875454;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
            sum += (double)0.7760870074683969833;
          } else {
            sum += (double)-0.1780753589856128027;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.7202474999999998184) ) ) {
        sum += (double)-5.783472594022750712;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
          sum += (double)-0.1842200975965809229;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9666010000000001545) ) ) {
            sum += (double)0.4591102080792188733;
          } else {
            sum += (double)-0.01364598911135427375;
          }
        }
      }
    }
  } else {
    sum += (double)17.17617187500000142;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.115000000000001101) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.8219387915826612545;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                sum += (double)-0.0005721641207996167348;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                  sum += (double)-0.1108485501388023764;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                          sum += (double)-0.0008664990044743210457;
                        } else {
                          sum += (double)-0.1288268889998433753;
                        }
                      } else {
                        sum += (double)-0.0004422974720288009448;
                      }
                    } else {
                      sum += (double)-0.1366392050849066786;
                    }
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                      sum += (double)-0.0005577861849482638459;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                        sum += (double)-0.099919917665678884;
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                          sum += (double)-0.001285953523183887108;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                            sum += (double)-0.0885200428783445431;
                          } else {
                            sum += (double)-0.0007223412734874063747;
                          }
                        }
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.156986986543909357;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0004911007050496572855;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.1559716603112599465;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.000485116938828293869;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.1341316389907253326;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0004963269326509759305;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.1396524891214832864;
                          } else {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                                sum += (double)-0.0004595396326531347064;
                              } else {
                                sum += (double)-0.152043523015202714;
                              }
                            } else {
                              sum += (double)-0.0004762686427507776925;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.1545057230567330464;
                  }
                } else {
                  sum += (double)-0.0005050945471932430679;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
            sum += (double)0.7372827053070069026;
          } else {
            sum += (double)-0.1691715865007912267;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.7202474999999998184) ) ) {
        sum += (double)-5.49429907292127595;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
          sum += (double)-0.1750090878154780538;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.605000000000001315) ) ) {
            sum += (double)0.3673646092148764031;
          } else {
            sum += (double)-0.08543431596911471582;
          }
        }
      }
    }
  } else {
    sum += (double)16.31744791666666572;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.415000000000000924) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.6244780757791555947;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.000000000000000444) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                    sum += (double)-0.0003695772866629811154;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                      sum += (double)-0.1053051126414331906;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.0008231740812589596066;
                            } else {
                              sum += (double)-0.1223856531587758645;
                            }
                          } else {
                            sum += (double)-0.0004201826321932281157;
                          }
                        } else {
                          sum += (double)-0.1298083750406900938;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.0003693284057935221419;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.09492326159989858403;
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                              sum += (double)-0.000724089209744606041;
                            } else {
                              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                                sum += (double)-0.08409373921559269716;
                              } else {
                                sum += (double)-0.0002388045789421546188;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1491379691926345563;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                  sum += (double)-0.0004526016122333908955;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                    sum += (double)-0.1481728496248760074;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                          sum += (double)-0.0004596829990043600246;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                            sum += (double)-0.1274255804676827086;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                              sum += (double)-0.0004756086049032218362;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                                sum += (double)-0.1326699281350160464;
                              } else {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                  sum += (double)-0.005587310773709630932;
                                } else {
                                  sum += (double)-0.0004524552390960071436;
                                }
                              }
                            }
                          }
                        }
                      } else {
                        sum += (double)-0.146779923784996047;
                      }
                    } else {
                      sum += (double)-0.0004834600727089501441;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.4780507394057862958;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4967950000000000421) ) ) {
              sum += (double)-0.3752343767881393677;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9437625000000001707) ) ) {
                sum += (double)-0.1722834384959677223;
              } else {
                sum += (double)-0.02374546437941748786;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1083694999999999936) ) ) {
            sum += (double)0.499945721924305031;
          } else {
            sum += (double)0.3378611201863913616;
          }
        }
      }
    } else {
      sum += (double)-1.648293940350413322;
    }
  } else {
    sum += (double)15.50156250000000036;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.115000000000001101) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.7496188256048387233;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                sum += (double)-0.0005351490354590248853;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                  sum += (double)-0.1000404703206029533;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                          sum += (double)-0.0007820153654879563598;
                        } else {
                          sum += (double)-0.1162675288685581232;
                        }
                      } else {
                        sum += (double)-0.0003991734736655435907;
                      }
                    } else {
                      sum += (double)-0.1233168707953559012;
                    }
                  } else {
                    if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                      sum += (double)-0.0005185540890883590407;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                        sum += (double)-0.09017789581484533801;
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                          sum += (double)-0.001207630495138701208;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                            sum += (double)-0.07988824629245844244;
                          } else {
                            sum += (double)-0.0006941465062995835072;
                          }
                        }
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.1416810983976629079;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
              sum += (double)-0.0004565201969716083216;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                sum += (double)-0.1407646639384920739;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)-0.0004435375461513499807;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                        sum += (double)-0.1210553653904649085;
                      } else {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                          sum += (double)-0.0004496876074670636773;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                            sum += (double)-0.1260369107933805299;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              sum += (double)-0.0001571970937894552394;
                            } else {
                              sum += (double)-0.005540124995247350248;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.1394401863170346978;
                  }
                } else {
                  sum += (double)-0.0004701347486901271831;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
            sum += (double)0.7049990350549871776;
          } else {
            sum += (double)-0.149810150576134532;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.7202474999999998184) ) ) {
        sum += (double)-5.218039951864629877;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.82594600000000018) ) ) {
            sum += (double)-0.2861019847542047301;
          } else {
            sum += (double)-0.04135520115494728532;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7639295000000000391) ) ) {
            sum += (double)0.6667410740540141711;
          } else {
            sum += (double)-0.129591471453507745;
          }
        }
      }
    }
  } else {
    sum += (double)14.7265625;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.415000000000000924) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.5565703118454674581;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.000000000000000444) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                    sum += (double)-0.0003243408885613665769;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                      sum += (double)-0.09503847483930916162;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                                sum += (double)-1.086408541245950426e-05;
                              } else {
                                sum += (double)-0.1104538155080083128;
                              }
                            } else {
                              sum += (double)-0.0003792148836080122304;
                            }
                          } else {
                            sum += (double)-0.1171505610148112081;
                          }
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                            sum += (double)-0.0003249343030492056602;
                          } else {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                              sum += (double)-0.08566856152145664594;
                            } else {
                              sum += (double)0.0003524390900996160459;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.0939499705973767113;
                        } else {
                          sum += (double)-0.0001921570755336944624;
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.134596593927053837;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                  sum += (double)-0.0004075868145288067995;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                    sum += (double)-0.1337258087642609339;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                          sum += (double)-0.0004191334487522265406;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                            sum += (double)-0.1150016659595927415;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                              sum += (double)-0.0004293769405497986115;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                                sum += (double)-0.1197351787165019665;
                              } else {
                                sum += (double)-0.00275520180048499045;
                              }
                            }
                          }
                        }
                      } else {
                        sum += (double)-0.1324694901234720057;
                      }
                    } else {
                      sum += (double)-0.0004383930309414345566;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                sum += (double)1.083421473503112908;
              } else {
                sum += (double)-0.02915900191830587962;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4967950000000000421) ) ) {
              sum += (double)-0.3636005861312150977;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719445000000001) ) ) {
                sum += (double)-0.1535091081900256116;
              } else {
                sum += (double)-0.01033699233084917068;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1083694999999999936) ) ) {
            sum += (double)0.6594892986305058713;
          } else {
            sum += (double)0.3255187817272686135;
          }
        }
      }
    } else {
      sum += (double)-1.54397153639131135;
    }
  } else {
    sum += (double)13.990234375;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.115000000000001101) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.6843119959677419484;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6850000000000001643) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                    sum += (double)-0.0003081238490174456938;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                      sum += (double)-0.0902862647484088815;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                                sum += (double)-1.032095552653423192e-05;
                              } else {
                                sum += (double)-0.1049317935953164166;
                              }
                            } else {
                              sum += (double)-0.0003602540568590215163;
                            }
                          } else {
                            sum += (double)-0.1112942292955186735;
                          }
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                            sum += (double)-0.0003079873383280560184;
                          } else {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                              sum += (double)-0.08138463018390276749;
                            } else {
                              sum += (double)0.0003509421966874180093;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.08925257106285311437;
                        } else {
                          sum += (double)-0.0001825491582675963247;
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1278677186614730898;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                  sum += (double)-0.0003871555120173679324;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                    sum += (double)-0.1270395527188740159;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                          sum += (double)-0.0003981767158198048291;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                            sum += (double)-0.1092503323581049401;
                          } else {
                            sum += (double)-0.003004687773717958435;
                          }
                        }
                      } else {
                        sum += (double)-0.1258455968429613436;
                      }
                    } else {
                      sum += (double)-0.0004164961629304156647;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.2281162870828456202;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5228829999999998757) ) ) {
              sum += (double)-0.3376507201045751971;
            } else {
              sum += (double)-0.01627622886560857116;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
            sum += (double)0.6739284791729667212;
          } else {
            sum += (double)-0.1320763821403185545;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.7202474999999998184) ) ) {
        sum += (double)-4.962311881482602161;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.82594600000000018) ) ) {
            sum += (double)-0.2797465264797210915;
          } else {
            sum += (double)-0.03626507937908172996;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7639295000000000391) ) ) {
            sum += (double)0.6964539549180439604;
          } else {
            sum += (double)-0.09438158671061197547;
          }
        }
      }
    }
  } else {
    sum += (double)13.29062500000000036;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.415000000000000924) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.4952842569223357971;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.000000000000000444) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                    sum += (double)-0.0002927176543186886504;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                      sum += (double)-0.08577157875587200497;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                              sum += (double)-0.0007902834256022395632;
                            } else {
                              sum += (double)-0.09968374151932565819;
                            }
                          } else {
                            sum += (double)-0.0003422413426832039891;
                          }
                        } else {
                          sum += (double)-0.1057296159532335189;
                        }
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                          sum += (double)-0.0002983916762274115334;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                            sum += (double)-0.07731620370737196657;
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                              sum += (double)-0.0007877537570001307433;
                            } else {
                              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                                sum += (double)-0.06687538319064262327;
                              } else {
                                sum += (double)-0.0001734217775154143484;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1214735857825779003;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                  sum += (double)-0.0003657495816727112021;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                    sum += (double)-0.1206876433841765905;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                          sum += (double)-0.0003775961461439082895;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                            sum += (double)-0.1037876691974577437;
                          } else {
                            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                              sum += (double)-0.0002572969176161977187;
                            } else {
                              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                                sum += (double)-0.1135977720602964758;
                              } else {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                                  sum += (double)-0.00500435079250856861;
                                } else {
                                  sum += (double)0.0001295031707283931437;
                                }
                              }
                            }
                          }
                        }
                      } else {
                        sum += (double)-0.1195532958214215458;
                      }
                    } else {
                      sum += (double)-0.0003944756692760632063;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.4378014564295025224;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.010000000000000231) ) ) {
              sum += (double)-0.3418265886902809303;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8974345000000001349) ) ) {
                sum += (double)-0.1522672655060887392;
              } else {
                sum += (double)0.003395096571357161894;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1083694999999999936) ) ) {
            sum += (double)0.801951451301574636;
          } else {
            sum += (double)0.3124027618340083912;
          }
        }
      }
    } else {
      sum += (double)-1.448019611669911333;
    }
  } else {
    sum += (double)12.62617187500000071;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.115000000000001101) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.6253276209677419706;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.970000000000000195) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6850000000000001643) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01500000000000000118) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                    sum += (double)-0.0002780817992822051557;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                      sum += (double)-0.0814830780029296986;
                    } else {
                      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                                sum += (double)2.970936912825265926e-05;
                              } else {
                                sum += (double)-0.09469998390752271122;
                              }
                            } else {
                              sum += (double)-0.0003251294485123316143;
                            }
                          } else {
                            sum += (double)-0.100441941155327702;
                          }
                        } else {
                          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                            sum += (double)-0.0002776685313906866195;
                          } else {
                            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                              sum += (double)-0.07345030747852751563;
                            } else {
                              sum += (double)0.000372782786901292441;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                          sum += (double)-0.08144616308409841077;
                        } else {
                          sum += (double)-0.0001647506841301224457;
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1153996713438385363;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                  sum += (double)-0.0003495102872484903266;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                    sum += (double)-0.114653630332341272;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.00000001800250948e-35) ) ) {
                          sum += (double)-0.0003593881192711999946;
                        } else {
                          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.04280740000000000933) ) ) {
                            sum += (double)-0.09859998108910733583;
                          } else {
                            sum += (double)-0.002711399657058796014;
                          }
                        }
                      } else {
                        sum += (double)-0.1135752777195879332;
                      }
                    } else {
                      sum += (double)-0.0003759475994775264411;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.2168752561717366134;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5228829999999998757) ) ) {
              sum += (double)-0.3382744680345058375;
            } else {
              sum += (double)-0.03075980814173817635;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.675000000000000266) ) ) {
            sum += (double)0.650235811688683274;
          } else {
            sum += (double)-0.1180134596283702875;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.7202474999999998184) ) ) {
        sum += (double)-4.725402399301528611;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.28500000000000103) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.82594600000000018) ) ) {
            sum += (double)-0.2758819499611854797;
          } else {
            sum += (double)-0.03384326860308647239;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7639295000000000391) ) ) {
            sum += (double)0.720292217390877898;
          } else {
            sum += (double)-0.06290211009758489569;
          }
        }
      }
    }
  } else {
    sum += (double)11.99479166666666785;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9996570000000001288) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.415000000000000924) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9993484999999998619) ) ) {
        sum += (double)0.4399730856233244336;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.215000000000000746) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.000000000000000444) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9300000000000000488) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3900000000000000688) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.797638499999999917) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8103399999999998382) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9807194999999998553) ) ) {
                      sum += (double)-0.0002641777389224360308;
                    } else {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.978905499999999873) ) ) {
                        sum += (double)-0.07740934306177599256;
                      } else {
                        if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8341529999999998113) ) ) {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9528864999999998586) ) ) {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9577489999999998505) ) ) {
                              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9681799999999999295) ) ) {
                                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9723899999999999766) ) ) {
                                  sum += (double)2.822386650719785318e-05;
                                } else {
                                  sum += (double)-0.08996530021342419303;
                                }
                              } else {
                                sum += (double)-0.0003088728431257238257;
                              }
                            } else {
                              sum += (double)-0.0954212019178602433;
                            }
                          } else {
                            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.875975499999999907) ) ) {
                              sum += (double)-0.0002744401207802407163;
                            } else {
                              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8758734999999998605) ) ) {
                                sum += (double)-0.06977704340255767856;
                              } else {
                                sum += (double)0.0003311392929048481508;
                              }
                            }
                          }
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.8294109999999998983) ) ) {
                            sum += (double)-0.07737390550516420884;
                          } else {
                            sum += (double)-0.0001565130969396454086;
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.1096300681657223913;
                  }
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4921859999999999569) ) ) {
                    sum += (double)-0.0003335553347202143554;
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4830409999999999426) ) ) {
                      sum += (double)-0.1089217413039434562;
                    } else {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8839850000000001318) ) ) {
                        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8805400000000001004) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7547895000000001131) ) ) {
                            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7504045000000000298) ) ) {
                              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5742630000000000789) ) ) {
                                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5618930000000000868) ) ) {
                                  sum += (double)-0.001581454596322706425;
                                } else {
                                  sum += (double)-0.107782521478810539;
                                }
                              } else {
                                sum += (double)0.0005215635784544260219;
                              }
                            } else {
                              sum += (double)-0.1432097563872466173;
                            }
                          } else {
                            sum += (double)0.0002697894357842937842;
                          }
                        } else {
                          sum += (double)-0.1078966206932669564;
                        }
                      } else {
                        sum += (double)-0.0003586259509637276886;
                      }
                    }
                  }
                }
              } else {
                sum += (double)0.1744733607109922868;
              }
            } else {
              sum += (double)0.4206791871391675208;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.010000000000000231) ) ) {
              sum += (double)-0.3464915707707405534;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8974345000000001349) ) ) {
                sum += (double)-0.1352273671515285824;
              } else {
                sum += (double)0.006320342035205275821;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1083694999999999936) ) ) {
            sum += (double)0.9288907086849212957;
          } else {
            sum += (double)0.2987337393420083642;
          }
        }
      }
    } else {
      sum += (double)-1.359675019979476929;
    }
  } else {
    sum += (double)11.39505208333333286;
  }

  sum = sum + (double)(0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
